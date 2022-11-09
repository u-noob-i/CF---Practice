#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int fr[26];
    for(int i=0;i<26;i++)
    {
        fr[i]=0;
    }
    for(int i=0;i<s.length();i++)
    {
        fr[s[i]-'a']++;
    }
    int oc=0;
    for(int i=0;i<26;i++)
    {
        if(fr[i]%2)
        {
            oc++;
        }
    }
    if(oc%2 || !oc)
    {
        cout<<"First"<<endl;
    }
    else
    {
        cout<<"Second"<<endl;
    }    
}