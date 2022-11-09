#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int flag=0;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            flag++;
        }
        if(flag>1)
        {
            break;
        }
    }
    if(flag>1||(flag==0&&n%2==0))
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }    
}