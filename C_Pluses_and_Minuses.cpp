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
        string s;
        cin>>s;
        int n=s.length();
        long long ans=0,sum=0;
        for(int i=0;i<n;i++){
            ans++;
            if(s[i]=='+'){
                sum++;
            }
            else{
                sum--;
            }
            if(sum<0){
                sum=0;
                ans+=i+1;
            }
        }
        cout<<ans<<"\n";
    }       
}