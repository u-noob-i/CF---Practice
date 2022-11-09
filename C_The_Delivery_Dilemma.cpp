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
    vector<pair<long long, long long>> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i].first;
    for (i = 0; i < n; i++)
        cin >> a[i].second;
    sort(a.begin(), a.end());
    long long s = 0;
    for (i = 0; i < n; i++)
        s += a[i].second;
    long long ans = s;
    for (i = 0; i < n; i++)
    {
        s -= a[i].second;
        long long temp = max(s, a[i].first);
        ans = min(ans, temp);
    }
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