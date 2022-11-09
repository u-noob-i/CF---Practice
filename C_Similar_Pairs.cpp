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
        int odd=0,even=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if(odd%2==0&&even%2==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        sort(arr.begin(),arr.end());
        bool cond=false;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]+1==arr[i+1])
            {
                cond=true;
                odd--;
                even--;
                break;
            }
        }
        if(cond)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}