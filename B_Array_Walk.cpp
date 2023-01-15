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
    cin >> n >> k >> p;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    int ans = a[0];
    for (i = 1; i < n && i <= k; i++)
        ans += a[i];
    int tot = ans;
    vector<int> x(n, 0);
    x[0] = a[0] + a[1];
    for (i = 1; i < n - 1; i++)
        x[i] = max(a[i] + a[i + 1], x[i - 1]);
    x[n - 1] = x[n - 2];
    for (i = k - 2, j = 1; i >= 0 && j <= p; i -= 2, j++)
    {
        tot -= a[i + 1] + a[i + 2];
        if (i + (2 * j) < p)
            ans = max(ans, tot + (j * x[i]) + a[i + 1]);
        else
            ans = max(ans, tot + (j * x[i]));
    }
    cout << ans;
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
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}