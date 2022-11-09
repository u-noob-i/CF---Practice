#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                c++;
            }
        }
        if(c==s.length()||c==0)
        {
            cout<<s<<endl;
        }
        else
        {
            for(int i=0;i<s.length();i++)
            {
                cout<<"10";
            }
            cout<<endl;
        }
    }
}