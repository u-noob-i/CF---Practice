#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            arr[i]=make_pair(a,b);
        }
        bool flag =true;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(arr[i].first<arr[i].second)
                {
                    flag=false;
                    break;
                }
            }
            else
            {
                if(arr[i].first<arr[i].second||arr[i].first<arr[i-1].first||arr[i].second<arr[i-1].second)
                {
                    flag=false;
                    break;
                }
                else if((arr[i].first-arr[i-1].first)<arr[i].second-arr[i-1].second)
                {
                    flag=false;
                    break;
                }
            }
        }
        if(!flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}