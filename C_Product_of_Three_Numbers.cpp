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

bool prime[1000001];

void sieveoferatosthenes()
{
    for (int i = 0; i < 1000001; i++)
        prime[i] = true;

    for (int p = 2; p < 1000001; p++)
    {
        if (prime[p] == true)
        {
            for (int i = 2; i * p < 1000001; i++)
                prime[i * p] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    sieveoferatosthenes();
    while (t--)
    {
        int n;
        cin>>n;
        int x=sqrt(n);
        bool cond=false;
        for(int i=2;i<=x;i++)
        {
            if(n%i)
            {
                continue;
            }
            int y=n/i;
            int z=sqrt(y);
            if(y%z)z++;
            if(z*z==y&&prime[z])
            {
                continue;
            }
            for(int k=2;k<=z;k++)
            {
                if(k==i||y/k==k||y/k==i)
                {
                    continue;
                }
                if(y%k==0)
                {
                    cout<<"Yes"<<endl;
                    cout<<i<<" "<<k<<" "<<y/k<<endl;
                    cond=true;
                    break;
                }
            }
            if(cond)
            {
                break;
            }
        }
        if(!cond)
        {
            cout<<"No"<<endl;
        }
    }
}