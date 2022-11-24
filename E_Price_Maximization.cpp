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
string s;

long long modu = 1000000007;

void solve(int T)
{
    long long k, ans = 0;
    cin >> n >> k;
    vector<long long> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i] / k;
        a[i] %= k;
    }
    sort(a.begin(), a.end());
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        while (a[i] + a[j] < k && i < j)
            i++;
        if (i < j)
            ans++;
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