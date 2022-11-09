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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    set<char> arr;
    for(int i=0;i<k;i++){
        char ch;
        cin>>ch;
        arr.insert(ch);
    }
    long long l=0,ans=0;
    for(int i=0;i<n;i++){
        while(i<n&&arr.find(s[i])!=arr.end()){
            i++;
            l++;
        }
        long long temp=l*(l+1);
        temp/=2;
        ans+=temp;
        l=0;
    }
    cout<<ans<<"\n";
}