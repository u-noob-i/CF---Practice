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
        int n;
        cin>>n;
        int p=n/4;
        if(n%4)p++;
        n-=p;
        while(n--)
        {
            cout<<9;
        }     
        while(p--)
        {
            cout<<8;
        }
        cout<<"\n";
    }
}