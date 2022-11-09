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
    vector<int> arr(n);
    int oc=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2)
        {
            oc++;
        }
    }
    if(oc<k)
    {
        cout<<"NO";
        return;
    }
    if((k-oc)%2)
    {
        cout<<"NO";
        return;
    }
    cout<<"YES\n";
    for(int i=0,c=0;i<n;i++)
    {
        if(c==k-1)
        {
            cout<<n;
            break;
        }
        if(arr[i]%2)
        {
            cout<<i+1<<" ";
            c++;
        }
    }
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