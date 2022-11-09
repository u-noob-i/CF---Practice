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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

void solve(int T)
{
    int n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        if(k%n==0)
        {
            cout<<1<<"\n";
        }
        else
        {
            cout<<n-(k%n)+1<<"\n";
        }
        return;
    }
    


    return;
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