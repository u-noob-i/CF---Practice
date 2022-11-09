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

int arr[100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long ans=1;
        int count=5;
        int i=0,j=n-1;
        while(count>1){
            if(arr[i]*arr[i+1]>=arr[j]*arr[j-1]){
                ans*=arr[i++]*arr[i++];
                count-=2;
            }
            else{
                ans*=arr[j--];
                count--;
            }
        }
        if(count==1){
            ans*=arr[j];
            count--;
        }
        if(ans<0){
            long long f=1;
            int ind=0;
            for(i=0;i<n;i++){
                if(arr[i]==0){
                    ans=0;
                    break;
                }
                if(arr[i]>0){
                    j=i-1;
                    break;
                }
            }
            if(ans){
                int count=5;
                while(count--){
                    if(i<n&&j>=0){
                        if(abs(i)<abs(j)){
                            f=arr[i++];
                        }
                        else{
                            f*=arr[j--];
                        }
                    }
                    else if(i<n){
                        f*=arr[i++];
                    }
                    else{
                        f*=arr[j--];
                    }
                }
                ans=max(ans,f);
            }
        }
        cout<<ans<<endl;
    }
}