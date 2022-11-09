#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,a,b;
        cin>>x>>y>>a>>b;
        if(x==0&&y==0)
        {
            cout<<0<<endl;
            continue;
        }
        long long costa=0,costb=0;
        costa=(max(x,y)-min(x,y))*a;
        x=min(x,y);
        y=min(x,y);
        costb=costa;
        costa+=((2*a)*(x));   
        costb+=(x*b);
        cout<<min(costa,costb)<<endl;
    }
}