#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
#include<numeric>

using namespace std;

int arr[200001];

void solve(int T)
{
    int n,t;
    cin>>n>>t;
    vector<pair<int,int>> arr(n);
    long long x=n,y=n;
    for(int i=0;i<n;i++)
    {
        arr[i].first=arr[i].second=1;
    }
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        if(arr[a-1].first)
        {
            arr[a-1].first--;
            x--;
        }
        if(arr[b-1].second)
        {
            arr[b-1].second--;
            y--;
        }
        cout<<x*y<<" ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;

    for(int i=1;i<=t;i++)
    {
        solve(t);
        cout<<"\n";
    }
}