#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a)
        {
            c++;
        }
    }
    if(c)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
    
}