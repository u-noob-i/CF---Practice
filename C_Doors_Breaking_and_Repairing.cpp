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
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int ans=0,d=0;
    if(x-y>0)
    {
        cout<<n<<"\n";
        return;
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]-x<=0)
        {
            d++;
        }
        else
        {
            break;
        }
    }
    if(d)
    {
        ans++;
    }
    int ind=d-1,i=0;
    while(1)
    {
        if(i>ind)
        {
            break;
        }
        if(i==ind)
        {
            if(arr[i]-x<=0)
            {
                ans++;
            }
            break;
        }
        arr[i++]-=x;
        ans++;
        arr[ind]+=y;
        if(x-y==0)
        {
            if(arr[ind]>x)
            {
                ind--;
            }
            continue;
        }
    }
    cout<<ans<<"\n";

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