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

void solve(int T)
{
    cin >> n;
    vector<pair<long long, long long>> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    int ans = 1;
    if (n > 1)
        ans++;
    long long last = a[0].first + 1;
    for (i = 1; i < n - 1; i++)
    {
        if (a[i].first - a[i].second >= last)
        {
            ans++;
            last = a[i].first + 1;
        }
        else if (a[i].first + a[i].second < a[i + 1].first)
        {
            ans++;
            last = a[i].first + a[i].second + 1;
        }
        else
            last = a[i].first + 1;
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
    t = 1;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}