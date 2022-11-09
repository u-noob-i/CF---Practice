#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long c=0;
    for(int i=0;i<n;i++)
    {
        c=max(c,arr[i]);
    }
    cout<<c<<endl;
}