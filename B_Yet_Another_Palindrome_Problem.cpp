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
        vector<int> arr(n),sum(n+1);
        for(int i=0;i<n+1;i++)
        {
            sum[i]=0;
        }
        bool cond=false;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum[arr[i]]++;
            if(i>0&&sum[arr[i]]>1&&arr[i-1]!=arr[i])
            {
                cond=true;
            }
        }
        if(cond)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            sort(sum.begin(),sum.end());
            if(sum[n]>2)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}