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
        long long n,m;
        cin>>n>>m;
        long long x=n/m;
        if(x==0)
        {
            cout<<0<<"\n";
            continue;
        }
        long long f=m%10,cur=2*m,count=1;
        while(cur%10!=m%10)
        {
            if(count==x)
            {
                break;
            }
            f+=(cur%10);
            cur+=m;
            count++;
        }
        f*=(x/count);
        x%=count;
        cur=m;
        while(x--)
        {
            f+=(cur%10);
            cur+=m;
        }
        cout<<f<<"\n";
    }
}