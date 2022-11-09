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

long long sad(long long n){
    long long a=-1,b=11,p=n;
    while(p){
        long long x=p%10;
        p/=10;
        a=max(a,x);
        b=min(b,x);
    }
    return n+(a*b);
}

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
        k--;
        while(k--){
            n=sad(n);
            long long p=n;
            bool cond=0;
            while(p){
                if(p%10==0){
                    cond=1;
                    break;
                }
                p/=10;
            }
            if(cond){
                break;
            }
        }
        cout<<n<<endl;
    }
}