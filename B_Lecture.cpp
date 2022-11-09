#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<utility>
#include<set>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<string,string>> s(m);
    for(int i=0;i<m;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        s[i]=make_pair(s1,s2);
    }
    vector<string> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        string s1=arr[i];
        for(int j=0;j<m;j++)
        {
            if(s[j].first==s1||s[j].second==s1)
            {
                string x=s[j].first;
                string y=s[j].second;
                cout<<(x.size()>y.size()?y:x)<<" ";
                break;
            }
        }
    }
}