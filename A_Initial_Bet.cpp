#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    if(sum==0)
    {
        cout<<-1<<endl;
        exit(0);
    }
    cout<<(sum%5==0?sum/5:-1)<<endl;
}