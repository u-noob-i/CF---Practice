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
    cin >> n;
    vector<vector<int>> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> m;
        for (j = 0; j < m; j++)
        {
            cin >> k;
            a[i].push_back(k);
        }
    }
    int ac = 0;
    vector<pair<int, int>> b;
    for (i = 0; i < n; i++)
    {
        bool f = 0;
        for (j = 1; j < a[i].size(); j++)
            if (a[i][j] > a[i][j - 1])
                f = 1;
        if (f)
        {
            ac++;
            continue;
        }
        b.push_back({a[i][0], a[i][a[i].size() - 1]});
    }

    sort(b.begin(), b.end());
    long long ans = (long long)1 * n * n;
    for (i = 0; i < b.size(); i++)
    {
        int l = 0, r = b.size() - 1, mid, res = b.size();
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (b[i].second < b[mid].first)
            {
                res = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        ans -= res;
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