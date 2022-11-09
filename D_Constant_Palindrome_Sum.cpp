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

void solve(int T)
{
    int n, k, m;
    cin >> n >> k;
    vector<int> arr(n), count(2 * k + 2, 0), pref(2 * k + 2, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        count[arr[i] + arr[j]]++;
        pref[min(arr[i], arr[j]) + 1]++;
        pref[max(arr[i], arr[j]) + k + 1]--;
    }
    for (int i = 2; i <= 2 * k; i++)
    {
        pref[i] += pref[i - 1];
    }
    int ans = INT_MAX;
    for (int i = 2; i <= 2 * k; i++)
    {
        ans = min(ans, pref[i] - count[i] + (((n / 2) - pref[i])) * 2);
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        solve(t);
    }
}