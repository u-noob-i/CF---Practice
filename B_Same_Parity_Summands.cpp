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
        int n,k;
        cin>>n>>k;
        if(n<k) {
            cout<<"NO"<<endl;
            continue;
        }
        if(n%2==0)
        {
            if(n>=k*2)
            {
                cout<<"YES"<<endl;
                while(k-->1){
                    cout<<2<<" ";
                    n-=2;
                }
                cout<<n<<endl;
                continue;
            }
            else if(n>=k&&k%2==0)
            {
                cout<<"YES"<<endl;
                while(k-->1){
                    n-=1;
                    cout<<1<<" ";
                }
                cout<<n<<endl;
                continue;
            }
            else {
                cout<<"NO"<<endl;
                continue;
            }
        }
        else
        {
            if(k%2&&n>=k)
            {
                cout<<"YES"<<endl;
                while(k-->1){
                    cout<<1<<" ";
                    n-=1;
                }
                cout<<n<<endl;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                continue;
            }
        }
    }
}