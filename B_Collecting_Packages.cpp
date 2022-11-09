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
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].first>>arr[i].second;
        }
        sort(arr.begin(),arr.end());
        bool cond=1;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i].first<arr[j].first&&arr[i].second>arr[j].second)
                {
                    cond=0;
                    cout<<"NO\n";
                    break;
                }
            }
            if(!cond){
                break;
            }
        }
        if(!cond){
            continue;
        }
        cout<<"YES\n";
        int x=0,y=0;
        for(int i=0;i<n;i++){
            int j=arr[i].first-x;
            x+=j;
            for(int k=0;k<j;k++){
                cout<<"R";
            }
            j=arr[i].second-y;
            y+=j;
            for(int k=0;k<j;k++){
                cout<<"U";
            }
        }
        cout<<"\n";
    }
}