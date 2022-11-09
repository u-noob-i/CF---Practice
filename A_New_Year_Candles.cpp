#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int t=0;
    int temp=0;
    while(a>0)
    {
        t+=a;
        temp+=a;
        a=temp/b;
        temp%=b;
    }
    cout<<t<<endl;
}