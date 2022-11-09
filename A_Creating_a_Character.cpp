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
    long long a, b, c;
    cin >> a >> b >> c;
    if (a + c <= b)
    {
        cout << 0;
        return;
    }
    long long l = 0, r = c, mid, ans = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a + mid > b + c - mid)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << c - ans + 1;
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