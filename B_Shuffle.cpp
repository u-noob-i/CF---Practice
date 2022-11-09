#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
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
        int n,m,x;
        cin>>n>>x>>m;
        int a=x,b=x;
        while(m--){
            int l,r;
            cin>>l>>r;
            if((l<=a&&r>=a)||(l<=b&&r>=b)){
                a=min(l,a);
                b=max(b,r);
            }
        }
        cout<<b-a+1<<"\n";
    }
}