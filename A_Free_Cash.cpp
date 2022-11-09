#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int preh=-1,prem=-1;
    int m=1;
    int cur=1;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a==preh&&b==prem)
        {
            cur++;
            m=max(cur,m);
        }
        else
        {
            cur=1;
        }           
        preh=a;
        prem=b;     
    }
    cout<<m<<endl;
}