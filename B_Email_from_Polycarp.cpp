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
    string n,k;
    cin>>n>>k;

    for(int i=0,ind=0;;)
    {
        if(i==k.length()&&ind==n.length())
        {
            break;
        }
        if(i==k.length()&&ind!=n.length())
        {
            cout<<"NO";
            return;
        }
        if(ind==n.length()&&i!=k.length())
        {
            cout<<"NO";
            return;
        }
        char ch=k[i];
        if(k[i]!=n[ind])
        {
            cout<<"NO";
            return;
        }
        int d=0,x=0;
        while(i<k.length()&&k[i]==ch)
        {
            i++;
            d++;
        }
        ch=n[ind];
        while(ind<n.length()&&n[ind]==ch)
        {
            x++;
            ind++;
        }
        if(d<x)
        {
            cout<<"NO";
            return;
        }
    }

    cout<<"YES";

    return;
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