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
    int n, k;
    long long x;
    cin >> n >> k;
    vector<long long> arr(k), pos(n + 1, LLONG_MAX - 1), f(n + 1, LLONG_MAX - 1), b(n + 1, LLONG_MAX - 1);
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        pos[arr[i]] = x;
    }
    for (int i = 1; i <= n; i++)
    {
        f[i] = min(f[i - 1] + 1, pos[i]);
    }
    b[n] = pos[n];
    for (int i = n - 1; i > 0; i--)
    {
        b[i] = min(b[i + 1] + 1, pos[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << min(b[i], f[i]) << " ";
    }
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