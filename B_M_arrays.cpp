#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;

void solve(int T)
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    for (int i = 0; i < m; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x %= m;
        arr[x]++;
    }
    int ans = 0;
    if (arr[0])
    {
        ans++;
    }
    for (int i = 1; i <= m / 2; i++)
    {
        if (!arr[i] && !arr[m - i])
        {
            continue;
        }
        if (arr[i] && 2 * i == m)
        {
            ans++;
            break;
        }
        ans++;
        ans += max(0, abs(arr[i] - arr[m - i]) - 1);
    }
    cout << ans;
    return;
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
        cout << "\n";
    }
}