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
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=1;
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=i;j<n-1&&arr[j+1]<=2*arr[j];j++){};
        ans=max(ans,j-i+1);
        i=j;
    }
    cout<<ans;
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