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
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        int l=-1,r=-1;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%k){
            cout<<n<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(arr[i]%k){
                l=i+1;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]%k){
                r=i+1;
                break;
            }
        }
        if(l==-1){
            cout<<-1<<endl;
            continue;
        }
        cout<<max(n-l,r-1)<<endl;
    }
}