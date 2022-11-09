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

using namespace std;

void solve(int T)
{
    long long k, n, a, b, x;
    cin >> k >> n >> a >> b;
    x = n * b;
    if (x >= k)
    {
        cout << -1;
        return;
    }
    long long ans = 0, l = 0, r = n, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if ((mid * a) + ((n - mid) * b) < k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans;
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