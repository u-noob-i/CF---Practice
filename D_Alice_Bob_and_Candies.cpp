#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
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
        vector<int> arr(n);
        long long a=0,b=0;
        for(int k=0;k<n;k++)
        {
            cin>>arr[k];
        }
        int turn=0;
        int i=-1,j=n;
        long long prev=0;
        while(i<j-1)
        {
            long long cur=0;
            turn++;
            if(turn%2)
            {
                while(cur<=prev&&i<j-1&&i<n-1)
                {
                    cur+=arr[++i];
                }
                a+=cur;
            }
            else
            {
                while(cur<=prev&&i<j-1&&j>0)
                {
                    cur+=arr[--j];
                }
                b+=cur;
            }
            prev=cur;
        }
        cout<<turn<<" "<<a<<" "<<b<<"\n";
    }
}