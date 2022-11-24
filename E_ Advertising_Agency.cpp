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

long long modu = 1000000007;

int nCrModp(int n, int r, int p)
{
    if (r > n - r)
        r = n - r;
    vector<int> C(r + 1, 0);
    C[0] = 1;
    for (i = 1; i <= n; i++) {
        for (j = min(i, r); j > 0; j--)
            C[j] = (C[j] + C[j - 1]) % p;
    }
    return C[r];
}

void solve(int T)
{
    cin >> n >> m;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    m--;
    j = m - 1;
    int p = 1, r = 1;
    while (j >= 0 && a[j] == a[m])
    {
        j--;
        p++;
        r++;
    }
    j = m + 1;
    while (j < n && a[j] == a[m])
    {
        j++;
        p++;
    }
    cout << nCrModp(p, r, modu);
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