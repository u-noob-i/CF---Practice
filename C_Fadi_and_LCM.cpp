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
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    long long x=sqrt(n);
    long long a,b;
    for(int i=x;i>0;i--){
        if(n%i==0){
            if(lcm(i,n/i)==n)
            {
                a=i;
                b=n/i;
                break;
            }
        }
    }
    if(n==1){
        cout<<1<<" "<<1<<"\n";
        return 0;
    }
    cout<<a<<" "<<b<<"\n";
}