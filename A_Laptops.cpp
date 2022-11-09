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
    t=1;
    while (t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].first>>arr[i].second;
        }
        int count=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++)
        {
            if((arr[i].first<arr[i+1].first)&&(arr[i].second>arr[i+1].second))
            {
                count++;
                break;
            }
        }
        if(count)
        {
            cout<<"Happy Alex"<<endl;
        }
        else
        {
            cout<<"Poor Alex"<<endl;
        }
    }
}