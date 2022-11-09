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
        vector<int> arr(n);
        vector<pair<int,int>> brr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            brr[i].first=arr[i];
            brr[i].second=i;
        }
        sort(brr.begin(),brr.end());
        int x=brr[0].first;
        bool cond=true;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=brr[i].first)
            {
                if(arr[i]%x==0&&arr[brr[i].second]%x==0) continue;
                else
                {
                    cond=0;
                    break;
                }
            }
        }
        if(cond) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}