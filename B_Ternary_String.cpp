#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int a=0,b=0,c=0;
        int l=n;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                a++;
            }
            else if(s[i]=='2')
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        if(a==0||b==0||c==0)
        {
            cout<<0<<endl;
            continue;
        }
        for(int i=1;i<n-1;i++)
        {
            int ind=i-1;
            while(s[i+1]==s[i]&&i<n-2)
            {
                i++;
            }
            if(s[ind]!=s[i+1]&&s[ind]!=s[i]&&s[i]!=s[i+1])
            {
                l=min(l,i+2-ind);
            }
        }
        cout<<l<<endl;
    }
}