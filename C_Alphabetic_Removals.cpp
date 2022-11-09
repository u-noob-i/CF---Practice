#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
#include<numeric>

using namespace std;

void solve(int T)
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int arr[26],d[26];
    for(int i=0;i<26;i++)
    {
        arr[i]=d[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        arr[s[i]-'a']++;
    }
    int ind=0;
    while(k--)
    {
        while(ind<26&&arr[ind]==0)
        {
            ind++;
        }
        if(ind==26)
        {
            break;
        }
        arr[ind]--;
        d[ind]++;
    }
    for(int i=0;i<n;i++)
    {
        if(d[s[i]-'a']>0)
        {
            d[s[i]-'a']--;
        }
        else
        {
            cout<<s[i];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;

    for(int i=1;i<=t;i++)
    {
        solve(t);
        cout<<"\n";
    }
}