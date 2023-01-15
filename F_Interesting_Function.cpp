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

int n, i, j, k, p;
string s;

long long modu = 1000000007;

void solve(int T)
{
    long long ans = 0, l, r;
    cin >> l >> r;
    for (long long x = 1; x <= max(l, r); x *= 10)
        ans += (r / x) - (l / x);
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