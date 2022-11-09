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

void solve(int t){
    int n;
    long long k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=arr[i]%k;
        arr[i]=k-arr[i];
    }
    sort(arr.begin(),arr.end());
    int j=0;
    while(j<n&&arr[j]!=k){
        j++;
    }
    j--;
    long long ans=arr[j]+1;
    if(arr[0]==k){
        cout<<0<<"\n";
        return;
    }
    long long maxc=1;
    int ind=0;
    for(int i=0;i<=j;i++){
        long long l=1;
        int x=i;
        while(i<j&&arr[i]==arr[i+1])
        {
            l++;
            i++;
        }
        if(l>=maxc){
            maxc=l;
            ind=x;
        }
    }
    maxc--;
    if(maxc>0){
        ans+=k-arr[j]-1;
        ans+=arr[ind]+1;
        maxc--;
        ans+=(k*maxc);
    }
    cout<<ans<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve(i);
    }
}