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

void dfs(vector<string> &a, vector<vector<bool>> &visited, int ind, int jnd,
         int previ, int prevj, int curl, bool &ans)
{
    visited[ind][jnd] = 1;
    curl++;
    if (ind < n - 1 && a[ind + 1][jnd] == a[ind][jnd])
    {
        if (visited[ind + 1][jnd] && curl >= 4 && previ != ind + 1)
        {
            ans = 1;
            return;
        }
        else if (!visited[ind + 1][jnd])
            dfs(a, visited, ind + 1, jnd, ind, jnd, curl, ans);
    }
    if (ind > 0 && a[ind - 1][jnd] == a[ind][jnd])
    {
        if (visited[ind - 1][jnd] && curl >= 4 && previ != ind - 1)
        {
            ans = 1;
            return;
        }
        else if (!visited[ind - 1][jnd])
            dfs(a, visited, ind - 1, jnd, ind, jnd, curl, ans);
    }
    if (jnd < m - 1 && a[ind][jnd + 1] == a[ind][jnd])
    {
        if (visited[ind][jnd + 1] && curl >= 4 && prevj != jnd + 1)
        {
            ans = 1;
            return;
        }
        else if (!visited[ind][jnd + 1])
            dfs(a, visited, ind, jnd + 1, ind, jnd, curl, ans);
    }
    if (jnd > 0 && a[ind][jnd - 1] == a[ind][jnd])
    {
        if (visited[ind][jnd - 1] && curl >= 4 && prevj != jnd - 1)
        {
            ans = 1;
            return;
        }
        else if (!visited[ind][jnd - 1])
            dfs(a, visited, ind, jnd - 1, ind, jnd, curl, ans);
    }
}

void solve(int T)
{
    cin >> n >> m;
    vector<string> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    vector<vector<bool>> visited(n, vector<bool>(m));
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            visited[i][j] = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            if (visited[i][j])
                continue;
            bool ans = 0;
            dfs(a, visited, i, j, -1, -1, 0, ans);
            if (ans)
            {
                cout << "Yes";
                return;
            }
        }
    cout << "No";
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