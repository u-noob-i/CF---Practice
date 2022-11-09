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
    cin >> n;
    vector<int> a(n), b(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        cin >> b[i];
    int ans = INT_MAX, l, r;
    for (i = 1; i < n - 1; i++)
    {
        l = -1, r = -1;
        for (j = i - 1; j >= 0; j--)
            if (l == -1 && a[j] < a[i])
                l = j;
            else if (l != -1 && b[j] < b[l] && a[j] < a[i])
                l = j;
        for (j = i + 1; j < n; j++)
            if (r == -1 && a[j] > a[i])
                r = j;
            else if (r != -1 && b[j] < b[r] && a[j] > a[i])
                r = j;
        if (r != -1 && l != -1)
            ans = min(ans, b[i] + b[l] + b[r]);
    }
    if (ans == INT_MAX)
        ans = -1;
    cout << ans;
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