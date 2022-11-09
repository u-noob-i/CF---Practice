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
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            for(int j=30;j>=0;j--){
                if(((1<<j)&arr[i])){
                    p[i]=j;
                    break;
                }
            }
        }
        sort(p.begin(),p.end());
        long long ans=0,l=0;
        for(int i=0;i<n;i++){
            while(i<n-1&&p[i+1]==p[i]){
                i++;
                l++;
            }
            ans+=(l*(l+1)/2);
            l=0;
        }
        cout<<ans<<"\n";
    }       
}