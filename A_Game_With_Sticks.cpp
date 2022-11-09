#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int c=n*m;
    int chance=1;
    while(c>0)
    {
        c-=(m+n-1);
        m--;
        n--;
        chance++;
    }
    if(chance%2!=0)
    {
        cout<<"Malvika"<<endl;
    }
    else
    {
        cout<<"Akshat"<<endl;
    }    
}