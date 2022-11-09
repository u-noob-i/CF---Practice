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
    int ans;
    cin >> n;
    vector<int> a(n), b;
    vector<bool> vis(n, 0);
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        if (a[i] == -1)
        {
            if (i > 0 && !vis[i - 1] && a[i - 1] != -1)
            {
                b.push_back(a[i - 1]);
                vis[i - 1] = 1;
            }
            if (i < n - 1 && !vis[i + 1] && a[i + 1] != -1)
            {
                b.push_back(a[i + 1]);
                vis[i + 1] = 1;
            }
        }
    if (b.size() == 0 || b.size() == n)
        ans = 0;
    else
    {
        sort(b.begin(), b.end());
        ans = b[0] + b[b.size() - 1];
        ans /= 2;
    }
    if (a[0] == -1)
        a[0] = ans;
    int x = INT_MIN;
    for (i = 1; i < n; i++)
    {
        if (a[i] == -1)
            a[i] = ans;
        x = max(x, abs(a[i] - a[i - 1]));
    }
    cout << x << " " << ans;
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