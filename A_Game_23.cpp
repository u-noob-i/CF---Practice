#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m==n)
    {
        cout<<0<<endl;
    }
    else if(m<n)
    {
        cout<<-1<<endl;
    }
    else if(m%n!=0)
    {
        cout<<-1<<endl;
    }
    else
    {
        int t=m/n;
        int move=0;
        while(t%2==0)
        {
            move++;
            t/=2;
        } 
        while(t%3==0)
        {
            move++;
            t/=3;
        }  
        if(t==1)
        {
            cout<<move<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }        
    }    
}