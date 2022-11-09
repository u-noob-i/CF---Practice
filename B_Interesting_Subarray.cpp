#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        bool ans=0;
        int i;
        for(i=1;i<n;i++)
        {
            if(abs(arr[i]-arr[i-1])>1)
            {
                ans=1;
                break;
            }
        }
        if(!ans)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n"<<i<<" "<<i+1<<"\n";
        }
    }
}