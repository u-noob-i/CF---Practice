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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

void solve(int T)
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
    vector<int> ans(1);
    ans[0]=arr[0];
    int g=arr[0],count=1;
    while(count<n)
    {
        int x,ind,temp,i=1;
        while(i<n&&arr[i]==-1)
        {
            i++;
        }
        x=gcd(g,arr[i]);
        ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]!=-1&&gcd(g,arr[j])>x)
            {
                x=gcd(g,arr[j]);
                ind=j;
            }
        }
        g=x;
        ans.push_back(arr[ind]);
        arr[ind]=-1;
        count++;
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
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