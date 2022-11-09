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

int n, i;
string s;

long long modu = 1000000007;

void solve(int T)
{
    cin >> n;
    vector<long long> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    if (n == 1)
    {
        cout << 0;
        return;
    }
    long long k = a[0];
    a[0] = 0;
    for (i = 1; i < n; i++)
    {
        if (a[i] >= k)
        {
            k = a[i];
            a[i] = 0;
        }
        else
        {
            a[i] = k - a[i];
        }
    }
    long long ans = 0;
    for (i = 1; i < n; i++)
    {
        k = 0;
        for (long long j = 1, m = 1; j <= a[i]; j *= 2, m++)
            if ((a[i] & j) != 0)
                k = m;
        ans = max(ans, k);
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