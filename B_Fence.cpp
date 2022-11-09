#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<long long> arr(n);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        arr[i]=sum;
    }
    int ind=-1;
    long long minsum=0;
    for(int i=0;i<=n-k;i++)
    {
        long long x=arr[i+k-1]-(i==0?0:arr[i-1]);
        if(ind==-1)
        {
            ind=i;
            minsum=x;
        }
        else if(x<minsum)
        {
            ind=i;
            minsum=x;
        }
    }
    cout<<ind+1<<endl;
}