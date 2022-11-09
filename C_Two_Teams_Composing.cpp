#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int binarysearch(int l,int r,vector<int> fr)
{
    int ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(fr[mid])
        {
            ans=mid;
            l=mid+1;
        }
        else if(!fr[mid])
        {
            r=mid-1;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> fr(n+1);
        for(int i=0;i<n+1;i++)
        {
            fr[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            fr[a]++;
        }
        sort(fr.begin(),fr.end(),greater<>());
        int ind=binarysearch(0,n,fr);
        ind++;
        //cout<<max(min(ind-1,fr[0]),min(ind,fr[0]-1))<<endl;
        if(ind>fr[0])
        {
            cout<<fr[0]<<endl;
        }  
        else if(fr[0]==ind)
        {
            cout<<ind-1<<endl;
        }
        else
        {
            cout<<ind<<endl;   
        }        
    }
}