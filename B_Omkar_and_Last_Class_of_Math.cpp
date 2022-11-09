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
        int x=-1;
        for(int i=2;i<=sqrt(n)+1;i++)
        {
            if(n%i==0&&i!=n)
            {
                x=n/i;
                break;
            }
        }
        if(x==-1)
        {
            cout<<1<<" "<<n-1<<endl;
        }
        else
        {
            cout<<x<<" "<<n-x<<endl;
        }
    }
}