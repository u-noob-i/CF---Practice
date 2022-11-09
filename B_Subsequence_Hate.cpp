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
        string s;
        cin>>s;
        int n=s.length();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1'){
                count++;
            }
        }
        int ans=10000000,c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                c++;
            }
            int x=i+1-c+count-c;
            int y=c+n-count-i-1+c;
            ans=min(ans,x);
            ans=min(ans,y);
        }
        cout<<ans<<"\n";
    }        
}