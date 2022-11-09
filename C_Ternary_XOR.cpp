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
        int n;
        string s;
        cin>>n>>s;
        string a="1",b="1";
        int i=1,d=0;
        while(i<n)
        {
            if(s[i]=='0')
            {
                a+="0";
                b+="0";
            }
            else if(s[i]=='2'&&d==0)
            {
                a+="1";
                b+="1";
            }
            else if(s[i]=='2'&&d==1)
            {
                a+="0";
                b+="2";
            }
            else if(s[i]=='1'&&d==1)
            {
                a+="0";
                b+="1";
            }
            else
            {
                d=1;
                a+="1";
                b+="0";
            }
            i++;
        }
        cout<<a<<"\n"<<b<<"\n";
    }
}