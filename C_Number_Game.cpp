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
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"FastestFinger"<<endl;
            continue;
        }
        if(n==2)
        {
            cout<<"Ashishgup"<<endl;
            continue;
        }
        long long x=2;
        for(int i=1;i<32;i++)
        {
            if(x==n)
            {
                cout<<"FastestFinger"<<endl;
                break;
            }
            x*=2;
        }
        if(x==pow(2,32)&&n%2==0&&(n/2)%2){
            long long y=n/2;
            int count=0;
            for(long long i=3;i<=sqrt(y);i++)
            {
                if(y%i==0){
                    count=2;
                    break;
                }
            }
            if(count>=2) cout<<"Ashishgup"<<endl;
            else cout<<"FastestFinger"<<endl;
        }
        else if(x==pow(2,32)) cout<<"Ashishgup"<<endl;
    }
}