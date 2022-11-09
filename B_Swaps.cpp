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
    vector<int> a(2 * n);
    for (i = 0; i < 2 * n; i++)
    {
        cin >> j;
        a[j - 1] = i % n;
    }
    int x = INT_MAX, ans = INT_MAX;
    for (i = 2 * n - 1; i >= 0; i--)
        if (i % 2)
            x = min(x, a[i]);
        else
            ans = min(ans, x + a[i]);
    cout << ans;
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