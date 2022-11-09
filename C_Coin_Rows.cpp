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

void solve(int T)
{
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>0)
        {
            a[i]+=a[i-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(i>0)
        {
            b[i]+=b[i-1];
        }
    }
    int bob=a[n-1]-a[0];
    for(int i=1;i<n;i++)
    {
        int temp=max(b[i-1],a[n-1]-a[i]);
        bob=min(bob, temp);
    }
    cout<<bob;
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