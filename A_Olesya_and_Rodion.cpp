#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    if(n==1&&t==10)
    {
        cout<<-1<<endl;
    }
    else if(t==10)
    {
        cout<<1;
        for(int i=1;i<n;i++)
        {
            cout<<0;
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<t;
        }
    }
}