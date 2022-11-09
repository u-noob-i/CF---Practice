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

void solve(int T)
{
    cin >> n;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    vector<vector<int>> dp(2, vector<int>(n + 1));
    for (i = 0; i < n + 1; i++)
        for (int j = 0; j < 2; j++)
            dp[j][i] = 99999999;
    dp[1][0] = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2; j++)
        {
            m = arr[i];
            dp[!j][i + 1] = min(dp[!j][i + 1], dp[j][i] + (j * m));
            if (i < n - 1)
            {
                m += arr[i + 1];
                dp[!j][i + 2] = min(dp[!j][i + 2], dp[j][i] + (j * m));
            }
        }
    }
    cout << min(dp[0][n], dp[1][n]);
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