#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;

int n, m, k, i, j;

void dfs(vector<int> &a, vector<int> &cur, int v, vector<bool> &visited)
{
    visited[v] = true;
    cur.push_back(v);

    if (visited[a[v]] == false)
        dfs(a, cur, a[v], visited);
}

void connected(vector<int> &a, vector<vector<int>> &con)
{
    vector<bool> visited(n, false);
    for (i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            vector<int> tp;
            dfs(a, tp, i, visited);
            con.push_back(tp);
        }
    }
}

void solve(int p)
{
    cin >> n;
    vector<vector<int>> con;
    vector<int> a(n), ans(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }
    connected(a, con);
    for (i = 0; i < con.size(); i++)
        for (j = 0; j < con[i].size(); j++)
            ans[con[i][j]] = con[i].size();
    for (i = 0; i < n; i++)
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