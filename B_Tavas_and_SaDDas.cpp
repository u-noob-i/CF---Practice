#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t=n;
    int d=0;
    while(t)
    {
        t/=10;
        d++;
    }
    long long c=0;
    c=(long long)pow(2,d-1);
    long long x=1;
    t=d;
    while(t)
    {
        if(t%10==4)
        {
            
        }
    }
}