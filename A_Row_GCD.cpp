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

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve(int T)
{
    cin >> n >> m;
    vector<long long> a(n), b(m);
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    for (i = 1; i < n; i++)
        a[i] -= a[0];
    long long g = a[1];
    if (n == 1)
    {
        for (i = 0; i < m; i++)
            cout << a[0] + b[i] << " ";
        return;
    }
    for (i = 2; i < n; i++)
        g = gcd(g, a[i]);
    for (i = 0; i < m; i++)
        cout << gcd(a[0] + b[i], g) << " ";
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