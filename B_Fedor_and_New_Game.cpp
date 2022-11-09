#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> arr(m+1);
    for(int i=0;i<m+1;i++)
    {
        cin>>arr[i];
    }
    int x=arr[m];
    int frnd=0;
    for(int i=0;i<m;i++)
    {
        int ct=0;
        int j=arr[i]^x;
        while(j>0)
        {
            if(j&1)
            {
                ct++;
            }
            j=j>>1;
        }
        if(ct<=k)
        {
            frnd++;
        }
    }
    cout<<frnd<<endl;
}