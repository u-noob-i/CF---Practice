#include<iostream>
#include<algorithm>
using namespace std;

int bs(int l,int r,int arr[],int x)
{
    int ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==x)
        {
            ans=mid;
            l=mid+1;
        }
        else if(arr[mid]<x)
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int q;
    cin>>q;
    int* b=new int[q];
    for(int i=0;i<q;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<q;i++)
    {
        int d=bs(0,n-1,arr,b[i]);
        if(d==-1)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<d+1<<endl;
        }
        
    }
}