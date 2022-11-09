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

int n, m, p, i, j;

void dfs1(vector<vector<int>> &brr, int x, int y, int cur)
{
    if (x == n || y == m || cur > p)
        return;
    brr[x][y] = cur;
    dfs1(brr, x + 1, y, cur + 1);
    dfs1(brr, x, y + 1, cur + 1);
}
void dfs2(vector<vector<int>> &brr, int x, int y, int cur)
{
    if (x == 0 || y == 0 || cur > p)
        return;
    brr[x][y] = cur;
    dfs1(brr, x - 1, y, cur + 1);
    dfs1(brr, x, y - 1, cur + 1);
}

void solve(int T)
{
    cin >> n >> m;
    p = (n + m - 1) / 2;
    if ((n + m - 1) % 2)
        p++;
    vector<vector<int>> arr(n, vector<int>(m)), brr(n, vector<int>(m));
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            brr[i][j] = -1;
        }
    dfs1(brr, 0, 0, 1);
    dfs2(brr, n - 1, m - 1, 1);
    int ans = 0;
    vector<pair<int, int>> count(p);
    for (i = 0; i < p; i++)
    {
        count[i].first = count[i].second = 0;
        for (j = 0; j < n; j++)
            for (int k = 0; k < m; k++)
                if (brr[j][k] == i + 1 && arr[j][k] == 0)
                    count[i].first++;
                else if (brr[j][k] == i + 1 && arr[j][k] == 1)
                    count[i].second++;

        ans += min(count[i].first, count[i].second);
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
        cout << "\n";
    }
}