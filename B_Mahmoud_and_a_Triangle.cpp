#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0,j=1;j<n-1;i++,j++)
    {
        if(arr[i]+arr[j]>arr[j+1])
        {
            cout<<"YES"<<endl;
            exit(0);
        }
    }
    cout<<"NO"<<endl;
}