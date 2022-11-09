#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<math.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,s;
    cin>>n>>s;
    vector<int> ans(n);
    for(int i=0;i<n-1;i++)
    {
        ans[i]=2;
        s-=2;
    }
    if(s<2)
    {
        cout<<"NO\n";
        return 0;
    }
    ans[n-1]=s;
    cout<<"YES\n";
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n"<<1<<"\n";
}