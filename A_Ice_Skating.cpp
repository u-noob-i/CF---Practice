#include<iostream>
#include<algorithm>
#include<utility>
#include<set>
#include<map>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++)
    {
        int ax,b;
        cin>>ax>>b;
        a[i]=make_pair(ax,b);
    }
    vector<pair<int,int>> pt;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i].first!=a[j].first&&a[i].second!=a[j].first)
            {
                pt.push_back({a[i].first,a[j].second});
                pt.push_back({a[i].second,a[j].first});
            }
        }
    }
    
}