#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<math.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n),dp(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            dp[i]=1;
        }
        for(int i=1;i<=n;i++)
        {
            int x=sqrt(i);
            for(int j=1;j<=x;j++)
            {
                if(i%j==0)
                {
                    if(arr[i-1]>arr[j-1])
                    {
                        dp[i-1]=max(dp[j-1]+1,dp[i-1]);
                    }
                    if(arr[i-1]>arr[(i/j)-1])
                    {
                        dp[i-1]=max(dp[(i/j)-1]+1,dp[i-1]);
                    }
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,dp[i]);
        }
        cout<<ans<<"\n";
    }
}