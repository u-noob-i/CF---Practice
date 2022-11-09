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

bool calc(long long x, long long p, long long q)
{
    long long ret = 0, cur = p;
    while (cur > 0)
    {
        ret += cur;
        cur /= q;
    }
    return ret >= x;
}

void solve(int T)
{
    long long p, q;
    cin >> p >> q;
    long long l = 1, r = 1000000000, mid, ans = LLONG_MAX;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (calc(p, mid, q))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
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