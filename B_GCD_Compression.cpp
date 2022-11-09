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
        vector<pair<int,int>> odd,even;
        for(int i=0;i<2*n;i++)
        {
            int a;
            cin>>a;
            if(a%2)
            {
                odd.push_back({make_pair(a,i+1)});
            }
            else
            {
                even.push_back({make_pair(a,i+1)});
            }
        }
        int i=n-1;
        int j=odd.size(),k=even.size();
        while(i-->0)
        {
            if(j>=2)
            {
                cout<<odd[j-1].second<<" "<<odd[j-2].second<<endl;
                j-=2;
                continue;
            }
            if(k>=2)
            {
                cout<<even[k-1].second<<" "<<even[k-2].second<<endl;
                k-=2;
            }
        }
    }
}