#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
#include<numeric>
#include<climits>

using namespace std;

int ans=INT_MAX;

void count(string s)
{
    int first=0,second=0,i=0;
    //cout<<s<<"\n";
    while(i<10)
    {
        bool t=0;
        if(i%2==0)
        {
            t=0;
            if(s[i]=='1')
            {
                first++;
            }
        }
        else
        {
            t=1;
            if(s[i]=='1')
            {
                second++;
            }
        }
        int x=9-i;
        x/=2;
        //cout<<first<<" "<<second<<" "<<i<<"\n";
        if(t)
        {
            if(first>second+x||first+x<second)
            {
                ans=min(ans,i+1);
                return;
            }
        }
        else
        {
            if(first>second+x+1||first+x<second)
            {
                ans=min(ans,i+1);
                return;
            }
        }
        i++;
    }
    ans=min(ans,10);
    return;
}

void rec(int i, string s)
{
    if(i==10)
    {
        return count(s);
    }

    if(s[i]=='?')
    {
        s[i]='1';
        rec(i+1,s);
        s[i]='0';
    }
    return rec(i+1,s);
}

void solve(int T)
{
    string s;
    cin>>s;
    rec(0,s);
    cout<<ans;
    ans=INT_MAX;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        solve(t);
        cout<<"\n";
    }
}