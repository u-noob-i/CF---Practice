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
    int n;
    cin>>n;
    vector<pair<int,int>> a(n+1);
    vector<int> ans(n+1);
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       a[x].first=i;
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x].second=i;
    }
    for(int i=1;i<n+1;i++){
        if(a[i].first>=a[i].second){
            ans[i]=a[i].first-a[i].second;
        }
        else{
            ans[i]=n-a[i].second+a[i].first;
        }
    }
    sort(ans.begin(),ans.end());
    int f=1,d=1;
    for(int i=2;i<n+1;i++){
        if(ans[i]==ans[i-1]){
            d++;
        }
        else{
            d=1;
        }
        f=max(f,d);
    }
    cout<<f<<endl;        
}