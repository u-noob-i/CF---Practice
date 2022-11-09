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
       int n=s.length();
       int maxd=0;
       int prev=0;
       int d=1;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='R')
           {
               maxd=max(i+1-prev,maxd);
               prev=i+1;
           }
       }
       maxd=max(n+1-prev,maxd);
       cout<<maxd<<endl;
    }
}