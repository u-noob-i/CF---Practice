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

int arr[200001];

int bs(int i,int l,int r){
    int ans=-1;
    while(l<=r){
        int mid= l+((r-l)/2);
        if(arr[mid]+arr[i]>0){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>x;
        arr[i]-=x;
    }
    sort(arr,arr+n);
    long long ans=0;
    for(int i=0;i<n;i++){
        int x=bs(i,i+1,n-1);
        if(x!=-1){
            ans+=n-x;
        }
    }
    cout<<ans<<endl;
}