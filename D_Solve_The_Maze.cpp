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

int n, m, i, j;

void dfs(vector<vector<char>> &arr, vector<vector<bool>> &visited, int x, int y)
{
    if (arr[x][y] == '#')
    {
        return;
    }
    visited[x][y] = 1;
    if (y > 0 && !visited[x][y - 1])
    {
        dfs(arr, visited, x, y - 1);
    }
    if (y < m - 1 && !visited[x][y + 1])
    {
        dfs(arr, visited, x, y + 1);
    }
    if (x > 0 && !visited[x - 1][y])
    {
        dfs(arr, visited, x - 1, y);
    }
    if (x < n - 1 && !visited[x + 1][y])
    {
        dfs(arr, visited, x + 1, y);
    }
}

void solve(int T)
{
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    int g = 0, b = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'G')
            {
                g++;
            }
            else if (arr[i][j] == 'B')
            {
                b++;
            }
        }
    }
    if (g == 0)
    {
        cout << "Yes";
        return;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] == 'B')
            {
                if (i > 0 && arr[i - 1][j] == '.')
                {
                    arr[i - 1][j] = '#';
                }
                if (i < n - 1 && arr[i + 1][j] == '.')
                {
                    arr[i + 1][j] = '#';
                }
                if (j < m - 1 && arr[i][j + 1] == '.')
                {
                    arr[i][j + 1] = '#';
                }
                if (j > 0 && arr[i][j - 1] == '.')
                {
                    arr[i][j - 1] = '#';
                }
            }
        }
    }
    if (arr[n - 1][m - 1] == '#')
    {
        cout << "No";
        return;
    }
    int x = 0, y = 0;
    vector<vector<bool>> visited(n, vector<bool>(m));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            visited[i][j] = 0;
        }
    }
    dfs(arr, visited, n - 1, m - 1);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] == 'G' && visited[i][j])
            {
                x++;
            }
            else if (arr[i][j] == 'B' && visited[i][j])
            {
                y++;
            }
        }
    }
    if (x == g && !y)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
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