#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int b=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]+arr[i-1]<k)
        {
            b+=(k-arr[i]-arr[i-1]);
            arr[i]+=(k-arr[i]-arr[i-1]);
        }
    }
    cout<<b<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}