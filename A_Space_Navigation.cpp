#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        string s;
        cin>>x>>y>>s;
        int a=0,b=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='R')
            a++;
            if(s[i]=='L')
            a--;
            if(s[i]=='U')
            b++;
            if(s[i]=='D')
            b--;  
        }
        if(a==x&&b==y)
        {
            cout<<"YES\n";
            continue;
        }
        a=x-a;
        b=y-b;
        char c,d=0;
        if(a>=0)
        c='D';
        else
        c='U';
        if(b>=0)
        c='L';
        else
        c='R';   
        a=abs(a);
        b=abs(b);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==c&&a>0)
            a--;
            if(s[i]==d&&b>0)
            b--;
        }    
        if(!a&&!b)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}