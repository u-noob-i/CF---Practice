#include<iostream>
#include<string>
using namespace std;

int m,s;

string solvemin()
{
    string ans;
    int sum=s;
    for(int i=1;i<=m;i++)
    {
        for(int j = 0;j<10;j++)
        {
            if(i==1&&j==0)
            {
                continue;
            }
            int ind=m-i;
            if(9*ind>=sum-j&&sum-j>=0)
            {
                ans+=(char)(j+'0');
                sum-=j;
                break;
            }
        }
    }
    return ans;
}

string solvemax()
{
    string ans;
    int sum=s;
    for(int i=1;i<=m;i++)
    {
        for(int j=9;j>=0;j--)
        {
            if(i==1&&j==0)
            {
                continue;
            }
            int ind=m-i;
            if(9*ind>=sum-j&&sum-j>=0)
            {
                ans+=(char)(j+'0');
                sum-=j;
                break;
            }
        }
    }
    return ans;
}

int main()
{
    cin>>m>>s;
    string mini=solvemin();
    string maxi=solvemax();
    int sum=0;
    if(m==1&&s==0)
    {
        cout<<0<<" "<<0<<endl;
        exit(0);
    }
    if(mini.length()==m)
    {
        cout<<mini<<" ";
    }
    else
    {
        cout<<-1<<" ";
    }
    if(maxi.length()==m)
    {
        cout<<maxi<<endl;
    }    
    else
    {
        cout<<-1<<endl;
    }    
}