#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long but=n;
    for(int i=1;i<n;i++)
    {
        but+=i*(n-i);
    }
    cout<<but<<endl;
}