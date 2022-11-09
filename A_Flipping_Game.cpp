#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        arr[i]=sum;
    }
    if(sum==0)
    {
        cout<<n<<endl;
        exit(0);
    }
    else if(sum==n)
    {
        cout<<n-1<<endl;
        exit(0);
    }
    int prev;
    int maxcur=0;
    for(int i=0;i<n;i++)
    {
        int cur;
        if(i)
        {
            prev=arr[i-1];
        }
        else
        {
            prev=0;
        }        
        for(int j=i;j<n;j++)
        {
            cur=arr[j]-prev;
            cur=j-i+1-cur;
            cur+=prev+arr[n-1]-(j==0?0:arr[j-1]);
            maxcur=max(cur,maxcur);
        }
    }
    cout<<maxcur<<endl;
}
/*int ct=0;
    int cur=1,maxcur=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            ct++;
        }
        else
        {
            while(i<n-1&&arr[i+1]==0)
            {
                cur++;
                i++;
            }
            maxcur=max(maxcur,cur);
            cur=1;
        }    
    }
    if(ct==n)
    {
        cout<<n-1<<endl;
    }
    else
    {
        cout<<ct+maxcur<<endl;
    }    */