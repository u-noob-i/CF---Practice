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

void solve(int T)
{
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> arr(n + 1, vector<bool>(n + 1, 0));
    for (int i = 1; i < n; i++)
    {
        arr[i][i + 1] = 1;
        m--;
    }
    for (int i = 3; i <= n; i++)
    {
        for (int j = 1; j <= i - 2; j++)
        {
            if (!m)
            {
                break;
            }
            arr[j][i] = 1;
            m--;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[i][j])
            {
                cout << i << " " << j << "\n";
            }
        }
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
        solve(t);
    }
}