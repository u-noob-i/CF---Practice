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
    vector<int> arr(4*n);
    for(int i=0;i<4*n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int ar=arr[0]*arr[4*n-1];
    bool ans=1;
    for(int i=0;i<n;i++)
    {
        int ind=i+1;
        if(arr[2*ind-1]==arr[2*ind-2]&&arr[4*n-2*ind]==arr[4*n-2*ind+1]&&arr[2*ind-1]*arr[4*n-2*ind]==ar)
        {
            continue;
        }
        else
        {
            ans=0;
            break;
        }
    }
    cout<<(ans?"YES":"NO");
    
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