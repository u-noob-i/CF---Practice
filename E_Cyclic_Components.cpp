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

void dfs(vector<vector<int>> &adjlist, set<int> &cur, int ind, int prev, vector<bool> &visited, int &cycl)
{
    visited[ind] = 1;
    cur.insert(ind);
    if (adjlist[ind].size() != 2)
        cycl = 0;
    for (int p = 0; p < adjlist[ind].size(); p++)
        if (visited[adjlist[ind][p]] && adjlist[ind][p] != prev && cycl != 0)
            cycl = 1;
        else if (!visited[adjlist[ind][p]])
            dfs(adjlist, cur, adjlist[ind][p], ind, visited, cycl);
}

void solve(int T)
{
    cin >> n >> m;
    vector<vector<int>> adjlist(n);
    for (i = 0; i < m; i++)
    {
        cin >> j >> k;
        adjlist[j - 1].push_back(k - 1);
        adjlist[k - 1].push_back(j - 1);
    }
    vector<bool> visited(n, 0);
    int ans = 0;
    for (i = 0; i < n; i++)
    {
        if (visited[i])
            continue;
        set<int> cur;
        int cycl = -1;
        dfs(adjlist, cur, i, -1, visited, cycl);
        if (cycl == 1)
        {
            k = 0;
            for (auto itr = cur.begin(); itr != cur.end(); itr++)
                k += adjlist[*itr].size();
            if (k / 2 == cur.size())
                ans++;
        }
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}