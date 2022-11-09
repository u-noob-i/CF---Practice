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
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        if(n==2||n==3){
            cout<<1<<endl;
            continue;
        }
        sort(arr.begin(),arr.end());
        int x=arr[n-1]+arr[n-2];
        vector<int> b(x+1);
        for(int i=0;i<x+1;i++){
            b[i]=0;
        }
        for(int i=1;i<x+1;i++){
            for(int j=0,k=n-1;j<k;){
                if(arr[j]+arr[k]==i){
                    j++;
                    k--;
                    b[i]++;
                }
                else if(arr[j]+arr[k]<i){
                    j++;
                }
                else if(arr[j]+arr[k]>i){
                    k--;
                }
            }
        }
        int ans=-1;
        for(int i=1;i<x+1;i++){
            ans=max(b[i],ans);
        }
        cout<<ans<<endl;
    }
}