#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <queue>
#include <climits>

using namespace std;

int n, m, i, j, k;
string s;

long long modu = 1000000007;

int dfs(vector<vector<int>> &adjlist, vector<bool> &visited, int cur)
{
    int ret=0;
    visited[i]=1;
    for(int p=0;p<adjlist[cur].size();p++)
        if(!visited[adjlist[cur][p]])
            ret+=dfs(adjlist,visited,adjlist[cur][p]);
    return ret+1;
}

void solve(int T)
{
    cin>>n>>m;
    vector<vector<int>> adjlist(n);
    for(i=0;i<n-1;i++)
    {
        cin>>j>>k;
        j--;
        k--;
        adjlist[j].push_back(k);
        adjlist[k].push_back(j);
    }
    vector<int> a;
    vector<bool> visited(n,0);
    visited[--m]=1;
    for(i=0;i<adjlist[m].size();i++)
        a.push_back(dfs(adjlist,visited,adjlist[m][i]));
    sort(a.begin(),a.end());
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}