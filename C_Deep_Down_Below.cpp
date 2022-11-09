#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
#include<numeric>
#include<climits>

using namespace std;

void solve(int T)
{
    int n;
    cin>>n;
    vector<vector<long long>> arr(n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        while(x--)
        {
            long long a;
            cin>>a;
            arr[i].push_back(a);
        }
    }
    vector<pair<long long,long long>> value(n);
    for(int i=0;i<n;i++)
    {
        long long x=arr[i][0];
        for(int j=1;j<arr[i].size();j++)
        {
            x=max(x,arr[i][j]-j);
        }
        value[i].first=x;
        value[i].second=arr[i].size();
    }
    sort(value.begin(),value.end());
    long long ans=value[0].first, x=value[0].second;
    for(int i=1;i<n;i++)
    {
        ans=max(ans,value[i].first-x);
        x+=value[i].second;
    }
    cout<<ans+1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        solve(t);
        cout<<"\n";
    }
}