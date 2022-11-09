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
        int n,x;
        cin>>n>>x;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long sum=0;
        int count=0;
        sort(arr.begin(),arr.end(),greater<long long>());
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum/(i+1)<x)
            {
                break;
            }
            count++;
        }
        cout<<count<<endl;
    }
}