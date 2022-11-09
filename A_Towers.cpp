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
    int maxl=1;
    int l=1;
    for(int i=0;i<n-1;i++)
    {
        while(i<n-1&&arr[i+1]==arr[i])
        {
            l++;
            i++;
        }
        maxl=max(l,maxl);
        l=1;
    }
    int d=distance(arr.begin(),unique(arr.begin(),arr.end()));
    cout<<maxl<<" "<<d<<endl;
}