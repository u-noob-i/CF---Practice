#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int w=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a<=h)
        {
            w++;
        }
        else
        {
            w+=2;
        }
    }
    cout<<w<<endl;
}