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

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

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
    long long ans=1;
    long long g=arr[0];
    for(int i=1;i<n;i++)
    {
        if(g==1)
        {
            break;
        }
        g=min(gcd(arr[i],g),g);
    }
    for(long long i=2;i<=sqrt(g);i++)
    {
        if(g%i==0)
        {
            ans++;
            if(i!=g/i)
            {
                ans++;
            }
        }
    }
    if(g!=1)
    {
        ans++;
    }
    cout<<ans<<"\n";
}