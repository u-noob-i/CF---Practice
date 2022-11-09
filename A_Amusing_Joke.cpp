#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    int fr[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<c.length();i++)
    {
        if(i<a.length())
        {
            fr[a[i]-'A']++;
        }
        if(i<b.length())
        {
            fr[b[i]-'A']++;
        }
        fr[c[i]-'A']--;
    }
    int flag=0;
    for(int i=0;i<26;i++)
    {
        if(fr[i]>0||fr[i]<0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
}