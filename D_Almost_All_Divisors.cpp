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
    long long x, y;
    cin >> n;
    vector<long long> a(n), c;
    set<long long> b;
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    x = a[n - 1] * a[0];
    for (y = 2; y <= sqrt(x); y++)
    {
        if (x % y == 0)
        {
            b.insert(y);
            b.insert(x / y);
        }
    }
    for (auto itr = b.begin(); itr != b.end(); itr++)
        c.push_back(*itr);
    if (a == c)
        cout << x;
    else
        cout << -1;
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