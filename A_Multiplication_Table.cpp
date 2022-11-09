#include<iostream>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<map>
using namespace std;
int main()
{
    long long n;
    long long x;
    cin>>n>>x;
    int count=0;
    for(int i=1;i<=sqrt(x);i++)
    {
        if(x%i==0&&i<=n&&x/i<=n)
        {
            if(i*i==x)
            {
                count++;
            }
            else
            {
                count+=2;
            }     
        }
    }    
    cout<<count<<endl;
}