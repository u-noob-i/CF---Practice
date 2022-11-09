#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<math.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int prime[]={2,3,5,7,11,13,17,19,23,29,31};
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n),ans(n); ;
        for(int i=0;i<n;i++)
        {
            ans[i]=-1;
            cin>>arr[i];
        }
        int col=0;
        int last=0;
        for(int i=0;i<11;i++)
        {
            bool change=0;
            for(int j=0;j<n;j++)
            {
                if(ans[j]==-1&&arr[j]%prime[i]==0)
                {
                    if(change==0)
                    {
                        change=1;
                        last++;
                    }
                    ans[j]=last;
                    col++;
                }
                if(col==n)
                {
                    break;
                }
            }
            if(col==n)
            {
                break;
            }
        }
        cout<<last<<"\n";
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }    
}