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
    cin >> t;
    while (t--)
    {
        long long n,k;
        cin>>n>>k;
        if(n<=k){
            cout<<1<<endl;
            continue;
        }
        long long ans=n;
        for(long long i=2;i<=sqrt(n);i++){
            if(n%i==0){
                if(n/i>k&&i<=k){
                    ans=min(ans,n/i);
                }
                else if(i>k&&n/i<=k){
                    ans=min(ans,i);
                }
                else if(n/i<=k&&i<=k){
                    ans=min(ans,i);
                    ans=min(ans,n/i);
                }
            }
        }
        cout<<ans<<endl;
    }
}