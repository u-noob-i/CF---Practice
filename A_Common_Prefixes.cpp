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
        for(int i=0;i<200;i++){
            s+="a";
        }
        int n;
        cin>>n;
        cout<<s<<"\n";
        while(n--){
            int x;
            cin>>x;
            if(s[x]=='a'){
                s[x]='b';
            }
            else{
                s[x]='a';
            }
            cout<<s<<"\n";
        }
    }       
}