#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
#include<cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        vector<pair<int,int>> arr(k);
        for(int i=0;i<k;i++)
        {
            cin>>arr[i].first;
        }
        for(int i=0;i<k;i++)
        {
            cin>>arr[i].second;
        }
        sort(arr.begin(),arr.end());
        long long ans=0;
        
    }
}