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
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        vector<int> peak(n);
        peak[0]=0;
        for(int i=1;i<n-1;i++)
        {
            peak[i]=peak[i-1];
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]) peak[i]++;
        }
        peak[n-1]=peak[n-2];
        int mp=peak[k-2], l=1;
        for(int i=1;i<=n-k;i++)
        {   
            int x=peak[i+k-2]-peak[i];
            if(x>mp)
            {
                mp=x;
                l=i+1;
            }
        }
        cout<<mp+1<<" "<<l<<"\n";
    }
}