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
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int pres=n,ans=n+1;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]>pres)
            {
                pres--;
                ans--;
            }
            else
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
}