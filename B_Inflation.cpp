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

long long bs(long long l,long long r, long long k, long long sum, long long val)
{
    long long ans;
    while(l<=r)
    {
        long long mid=(l+r)/2;
        long long z=(k*(sum+mid))-(val*100);
        if(z==0)
        {
            ans=mid;
            break;
        }
        if(z>0)
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long k;
        cin>>n>>k;
        vector<long long> arr(n);
        long long sum=0,m=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i)
            {
                long long z=(k*sum)-(arr[i]*100);
                if(z<0)
                {
                    long long f=bs(1,abs(z),k,sum,arr[i]);
                    sum+=f;
                    m+=f;
                }
            }
            sum+=arr[i];
        }
        cout<<m<<"\n";
    }
}