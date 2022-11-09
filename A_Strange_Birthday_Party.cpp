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
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> a(n),b(m);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        long long ans=0;
        for(int i=n-1,j=0;i>=0;i--)
        {
            if(j<=a[i]-1&&j<m)
            {
                ans+=b[j++];
            }
            else
            {
                ans+=b[a[i]-1];
            }
        }
        cout<<ans<<"\n";
    }    
}