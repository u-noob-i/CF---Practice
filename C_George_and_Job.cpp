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

void solve(int T)
{
    cin >> n >> m >> k;
    vector<long long> a(n), b(n + 1);
    for (i = 0; i < n; i++)
        cin >> a[i];
    b[0] = 0;
    for (i = 0; i < n; i++)
        b[i + 1] = a[i] + b[i];
    vector<vector<long long>> dp(k + 1, vector<long long>(n + 1));
    for (i = 0; i <= k; i++)
        dp[i][0] = 0;
    for (i = 0; i <= n; i++)
        dp[0][i] = 0;
    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j - m < 0)
                dp[i][j] = 0;
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j - m] + b[j] - b[j - m]);
        }
    }
    cout << dp[k][n];
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