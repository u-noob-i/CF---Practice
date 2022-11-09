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
        vector<int> a(n),b(k);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<k;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        long long ans=0;
        int i=0,j=n-1,p=0;
        while(i<k&&b[i]==1){
            ans+=(2*a[j--]);
            i++;
        }
        int x=k-1;
        while(x>=i){
            ans+=a[j--]+a[p++];
            p+=b[x]-2;
            x--;
        }
        cout<<ans<<"\n";
    }
}