#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
#include<cmath>

using namespace std;

int bs(int l,int r,long long x, vector<long long> arr)
{
    int ans=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==x)
        {
            ans=mid;
            break;
        }
        if(arr[mid]<x)
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<long long> ans;
    ans.push_back(1);
    long long i=1;
    while(i<=1414210000)
    {
        i=(2*i)+1;
        ans.push_back(i*(i+1)/2);
    }
    for(int j=1;j<ans.size();j++)
    {
        ans[j]=ans[j]+ans[j-1];
    }
    while(t--)
    {
        long long n;
        cin>>n;
        int x=bs(0,ans.size()-1,n,ans);
        cout<<x+1<<"\n";
    }      
}