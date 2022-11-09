#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(i%2)
            {
                if(s[i]=='z')
                {
                    s[i]--;
                }
                else
                {
                    s[i]='z';
                }
            }
            else
            {
                if(s[i]=='a')
                {
                    s[i]++;
                }
                else
                {
                    s[i]='a';
                }
            }
        }
        cout<<s<<endl;
    }
}