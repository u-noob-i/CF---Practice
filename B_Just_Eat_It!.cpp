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
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n);
        long long y=0,a=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool ans=0;
        for(int i=0;i<n-1;i++){
            y+=arr[i];
            if(y<=0){
                ans=1;
                break;
            }
        }
        y=0;
        for(int i=n-1;i>0;i--){
            y+=arr[i];
            if(y<=0){
                ans=1;
                break;
            }
        }
        if(ans){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }       
}