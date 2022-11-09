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
    cin >> n >> m >> k;
    vector<long long> a(n), b(n, 0), c(m, 0);
    for (i = 0; i < n; i++)
        cin >> a[i];
    vector<pair<pair<int, int>, long long>> act(m);
    for (i = 0; i < m; i++)
        cin >> act[i].first.first >> act[i].first.second >> act[i].second;
    for (i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        c[x]++;
        if (y < m)
            c[y]--;
    }
    for (i = 1; i < m; i++)
        c[i] += c[i - 1];
    for (i = 0; i < m; i++)
    {
        b[act[i].first.first - 1] += act[i].second * c[i];
        if (act[i].first.second < n)
            b[act[i].first.second] -= act[i].second * c[i];
    }
    for (i = 1; i < n; i++)
        b[i] += b[i - 1];
    for (i = 0; i < n; i++)
    {
        a[i] += b[i];
        cout << a[i] << " ";
    }
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