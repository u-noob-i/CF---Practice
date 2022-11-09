#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n),brr(n);
        int o=-1,mo=-1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1&&o<0)
            {
                o=i;
            }
            else if(arr[i]==-1&&mo<0)
            {
                mo=i;
            }
        }
        for(int i=0;i<n;i++)
        {
            cin>>brr[i];
        }
        bool cond=true;
        for(int i=0;i<n;i++)
        {
            if(brr[i]<arr[i])
            {
                if(mo==-1)
                {
                    cond=false;
                    break;
                }
                if(mo>=i)
                {
                    cond=false;
                    break;
                }
            }
            if(brr[i]>arr[i])
            {
                if(o==-1)
                {
                    cond=false;
                    break;
                }
                if(o>=i)
                {
                    cond=false;
                    break;
                }
            }
        }
        if(cond)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}