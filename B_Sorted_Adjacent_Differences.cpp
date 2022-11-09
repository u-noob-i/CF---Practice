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
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       sort(arr.begin(),arr.end());
       vector<int> ans(n);
       int p=n-1;
       int i=0,j=n-1;
       int turn=1;
       while(p>=0)
       {
           if(turn%2)
           {
               ans[p--]=arr[j--];
           }
           else
           {
               ans[p--]=arr[i++];
           }
           turn++;
       }
       for(int i=0;i<n;i++)
       {
           cout<<ans[i]<<" ";
       }
       cout<<endl;
    }
}