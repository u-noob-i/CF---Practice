#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y,z;
        cin>>a>>b>>c>>x>>y>>z;
        int p=min(a,z);
        a-=p;
        z-=p;
        long long sum=0;
        p=min(c,z);
        c-=p;
        z-=p;
        p=min(b,z);
        sum-=(2*p);
        b-=p;
        z-=p;
        p=min(y,c);
        sum+=(2*p);
        y-=p;
        c-=p;
        p=min(y,a);
        y-=p;
        a-=p;
        p=min(y,b);
        y-=p;
        b-=p;
        cout<<sum<<endl;
    }
}