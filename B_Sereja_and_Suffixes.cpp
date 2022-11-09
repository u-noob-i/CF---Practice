#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    set<int> arr;
    vector<int> fr(n);
    int ct=0;
    for(int i=n-1;i>=0;i--)
    {
        auto itr=arr.find(a[i]);
        if(itr==arr.end())
        {
            arr.insert(a[i]);
            ct++;
        }
        fr[i]=ct;
    }
    for(int i=0;i<m;i++)
    {
        cout<<fr[b[i]-1]<<endl;
    }
}