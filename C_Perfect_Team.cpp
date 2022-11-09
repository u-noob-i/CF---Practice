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
        int c,m,x;
        cin>>c>>m>>x;
        int ans=0;
        ans=min(c,m);
        ans=min(ans,x);
        c-=ans;
        m-=ans;
        x-=ans;
        if(c==0||m==0)
        {
            cout<<ans<<"\n";
            continue;
        }
        if(c<m)
        {
            swap(c,m);
        }
        if(c>=2*m)
        {
            ans+=m;
        }
        else
        {
            int z=c-m;
            ans+=min(m,z);
            c-=2*min(m,z);
            m-=min(m,z);
            z=(min(c,m)/3);
            c-=(3*z);
            m-=(3*z);
            ans+=(2*z);
            if(c>1&&m>0)
            {
                ans++;
                c-=2;
                m--;
            }
            if(c>0&&m>1)
            {
                ans++;
                c--;
                m-=2;
            }
        }
        cout<<ans<<"\n";
    }    
}