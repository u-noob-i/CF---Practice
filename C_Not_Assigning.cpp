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

void dfs(vector<vector<pair<int, int>>> &adjlist, vector<bool> &visited, vector<int> &ans, int ind, int prev)
{
    visited[ind] = 1;
    int x;
    if (prev == 2)
        x = 3;
    else
        x = 2;
    for (int p = 0; p < adjlist[ind].size(); p++)
        if (!visited[adjlist[ind][p].first])
        {
            ans[adjlist[ind][p].second] = x;
            dfs(adjlist, visited, ans, adjlist[ind][p].first, x);
        }
}

void solve(int T)
{
    cin >> n;
    vector<vector<pair<int, int>>> adjlist(n);
    vector<pair<int, int>> edge(n - 1);
    vector<int> a(n, 0);
    for (i = 0; i < n - 1; i++)
    {
        cin >> j >> k;
        j--;
        k--;
        if (j > k)
            swap(j, k);
        a[j]++;
        a[k]++;
        adjlist[j].push_back({k, i});
        adjlist[k].push_back({j, i});
        edge[i] = {j, k};
    }
    int ind = -1;
    for (i = 0; i < n; i++)
        if (a[i] == 1)
        {
            ind = i;
            break;
        }
    sort(a.begin(), a.end());
    if (a[n - 1] > 2)
    {
        cout << -1;
        return;
    }
    vector<int> ans(n - 1);
    vector<bool> visited(n, 0);
    dfs(adjlist, visited, ans, ind, -1);
    for (i = 0; i < n - 1; i++)
        cout << ans[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}