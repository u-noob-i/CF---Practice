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
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    long long ans=0,temp=0;
    for(int i=0;i<n;i++)
    {
        if(b[i])
        {
            ans+=a[i];
            a[i]=0;
        }
    }
    for(int i=0;i<k;i++)
    {
        temp+=a[i];
    }
    long long cur=temp;
    int i=0,j=k;
    while(j<n)
    {
        cur=cur+a[j++]-a[i++];
        temp=max(temp,cur);
    }
    cout<<ans+temp<<"\n";

    return;
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