#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"  ";
    }
    cout<<0<<endl;
    for(int i=1;i<=n;i++)
    {
        int j=n-i;
        while(j--)
        {
            cout<<"  ";
        }
        for(j=0;j<=i;j++)
        {
            cout<<j;
            if(1)
            {
                cout<<" ";
            }
        }
        for(j=i-1;j>=0;j--)
        {
            cout<<j;
            if(j!=0)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        int j=n-i;
        while(j--)
        {
            cout<<"  ";
        }
        for(j=0;j<=i;j++)
        {
            cout<<j;
            if(1)
            {
                cout<<" ";
            }
        }
        for(j=i-1;j>=0;j--)
        {
            cout<<j;
            if(j!=0)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"  ";
    }
    cout<<0;
}