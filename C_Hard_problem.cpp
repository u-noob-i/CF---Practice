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

int n, i, j, k, p;
string s;

long long modu = 1000000007;

void solve(int T)
{
    cin >> n;
    long long ans = 0;
    vector<long long> a(n);
    vector<string> s(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        cin >> s[i];
    long long dp[n][2];
    dp[0][0] = 0;
    dp[0][1] = a[0];
    for (i = 1; i < n; i++)
    {
        long long x = LLONG_MAX, y = LLONG_MAX;
        string str1 = s[i], str2 = string(s[i].rbegin(), s[i].rend());
        string str3 = s[i - 1], str4 = string(s[i - 1].rbegin(), s[i - 1].rend());
        if (str1 >= str3 && dp[i - 1][0] != LLONG_MAX)
        {
            x = dp[i - 1][0];
        }
        if (str1 >= str4 && dp[i - 1][1] != LLONG_MAX)
        {
            y = dp[i - 1][1];
        }
        dp[i][0] = min(x, y);
        x = LLONG_MAX;
        y = LLONG_MAX;
        if (str2 >= str3 && dp[i - 1][0] != LLONG_MAX)
        {
            x = dp[i - 1][0] + a[i];
        }
        if (str2 >= str4 && dp[i - 1][1] != LLONG_MAX)
        {
            y = dp[i - 1][1] + a[i];
        }
        dp[i][1] = min(x, y);
    }
    if (dp[n - 1][0] == dp[n - 1][1] && dp[n - 1][0] == LLONG_MAX)
        cout << -1;
    else
        cout << min(dp[n - 1][0], dp[n - 1][1]);
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

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