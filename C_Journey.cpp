#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;

int n, m, i, j;
vector<double> dist;

void dfs(vector<vector<int>> &adjlist, vector<bool> &visited, int ind, int len)
{
    visited[ind] = 1;
    int dun = 0;
    for (int k = 0; k < adjlist[ind].size(); k++)
    {
        if (!visited[adjlist[ind][k]])
        {
            dun++;
            dfs(adjlist, visited, adjlist[ind][k], len + 1);
        }
    }
    if (!dun)
    {
        dist.push_back(len);
    }
}

void solve(int T)
{
    int x, y;
    cin >> n;
    vector<vector<int>> adjlist(n + 1);
    vector<bool> visited(n + 1, 0);
    for (i = 0; i < n - 1; i++)
    {
        cin >> x >> y;
        adjlist[x].push_back(y);
        adjlist[y].push_back(x);
    }
    if (n == 1 || n == 2)
    {
        cout << fixed << setprecision(6) << (double)(n - 1);
        return;
    }
    dfs(adjlist, visited, 1, 0);
    double ans = 0, c = dist.size();
    for (i = 0; i < dist.size(); i++)
    {
        ans += dist[i];
    }
    ans /= c;
    cout << fixed << setprecision(6) << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}