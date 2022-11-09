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
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int x, ans=9999999, f=0;
        for(int i=1;i<n;i++){
            x=arr[0]^arr[i];
            int j=0;
            vector<int> xd(n);
            while(j<n){
                xd[j]=arr[j]^x;
                j++;
            }
            f=0;
            sort(xd.begin(),xd.end());
            for(int j=0;j<n;j++){
                if(xd[j]!=arr[j]){
                    break;
                }
                f++;
            }
            if(f==n&&x){
                ans=min(ans,x);
            }
        }
        if(ans==9999999||ans==0){
            cout<<-1<<"\n";
        }
        else{
            cout<<ans<<"\n";
        }
    }       
}