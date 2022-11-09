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
#include <stack>

using namespace std;

set<int> s;

void DFSutil(vector<vector<int>> &c, int i, vector<bool> &visited, int &count)
{
    visited[i] = true;
    s.insert(i);
    for (int j = 0; j < c[i].size(); j++)
    {
        if (visited[c[i][j]] == false)
        {
            count++;
            DFSutil(c, c[i][j], visited, count);
        }
    }
}

void DFS(vector<vector<int>> &c, int n, vector<int> &ans)
{
    vector<bool> visited(n);
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            int count = 1;
            DFSutil(c, i, visited, count);
            for (auto itr = s.begin(); itr != s.end(); ++itr)
            {
                ans[*itr] = count;
            }
            s.clear();
        }
    }
}

void solve(int T)
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> c(n);
    vector<int> ans(n, 0);
    for (int i = 0; i < m; i++)
    {
        int k, x;
        cin >> k;
        if (k == 0)
        {
            continue;
        }
        int y;
        cin >> y;
        k--;
        while (k--)
        {
            cin >> x;
            c[y - 1].push_back(x - 1);
            c[x - 1].push_back(y - 1);
            y = x;
        }
    }
    DFS(c, n, ans);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
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