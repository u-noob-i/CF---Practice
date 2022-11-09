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
    int n;
    cin>>n;
    vector<long long> arr(n),brr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    vector<long long> dpa(n),dpb(n);
    dpa[0]=arr[0];
    dpb[0]=brr[0];
    for(int i=1;i<n;i++)
    {
        dpa[i]=max(dpa[i-1],dpb[i-1]+arr[i]);
        dpb[i]=max(dpb[i-1],dpa[i-1]+brr[i]);
    }
    cout<<max(dpa[n-1],dpb[n-1]);
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