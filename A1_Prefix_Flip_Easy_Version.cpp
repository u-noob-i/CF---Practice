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
        string a,b;
        cin>>a>>b;
        int ans=0;
        vector<int> ansarray;
        for(int i=n-1;i>0;i--){
            if(a[i]==b[i]){
                continue;
            }
            if(a[0]==b[i]){
                if(a[0]=='1'){
                    a[0]='0';
                }
                else{
                    a[0]='1';
                }
                ans++;
                ansarray.push_back(1);
            }
            ans++;
            for(int j=0,k=i;j<k;j++,k--){
                if(a[j]=='1'){
                    a[j]='0';
                }
                else{
                    a[j]='1';
                }
                if(a[k]=='1'){
                    a[k]='0';
                }
                else{
                    a[k]='1';
                }
                swap(a[j],a[k]);
            }
            if(i%2==0){
                if(a[i/2]=='1'){
                    a[i/2]='0';
                }
                else{
                    a[i/2]='1';
                }
            }
            ansarray.push_back(i+1);
        }
        if(a[0]!=b[0]){
            ans++;
            if(a[0]=='1'){
                a[0]='0';
            }
            else{
                a[0]='1';
            }
            ansarray.push_back(1);
        }
        cout<<ans<<" ";
        if(ans==0){
            cout<<"\n";
        }
        for(int i=0;i<ansarray.size();i++){
            cout<<ansarray[i]<<" ";
        }
        if(ansarray.size()>0){
            cout<<"\n";
        }
    }
}