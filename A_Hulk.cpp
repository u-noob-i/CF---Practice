#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string t="that ";
    string a="I hate ";
    string b="I love ";
    string l="it";
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout<<a;
        }
        else if(i%2==0)
        {
            cout<<b;
        }
        if(i!=n)
        {
            cout<<t;
        }
    }
    cout<<l;
}