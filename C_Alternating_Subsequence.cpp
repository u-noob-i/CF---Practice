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
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            long long a=arr[i];
            if(arr[i]>0)
            {
                while(i<n&&arr[i]>0)
                {
                    a=max(a,arr[i]);
                    i++;
                }
                sum+=a;
            }
            else
            {
                while(i<n&&arr[i]<0)
                {
                    a=max(a,arr[i]);
                    i++;
                }
                sum+=a;
            }
            i--;
        }
        cout<<sum<<endl;
    }
}