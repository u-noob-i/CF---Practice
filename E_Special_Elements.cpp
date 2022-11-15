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

int n, i, j;
string s;

long long modu = 1000000007;

void solve(int T)
{
    cin >> n;
    vector<int> a(n), pref(n + 1, 0);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        pref[i + 1] = a[i] + pref[i];
    }
    vector<int> arr(n + 1, 0);
    for (i = 0; i < n; i++)
        for (j = i + 2; j <= n; j++)
            if (pref[j] - pref[i] <= n)
                arr[pref[j] - pref[i]] = 1;
    int ans = 0;
    for (i = 0; i < n; i++)
        if (arr[a[i]])
            ans++;
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