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

int n, m, p, i, j;

void solve(int T)
{
    long long r, avg, sum = 0, req, temp, ans;
    cin >> n >> r >> avg;
    vector<pair<long long, long long>> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i].second >> arr[i].first;
    sort(arr.begin(), arr.end());
    for (i = 0; i < n; i++)
        sum += arr[i].second;
    req = avg * n;
    ans = 0;
    req -= sum;
    for (i = 0; i < n; i++)
    {
        if (req <= 0)
            break;
        temp = min(r - arr[i].second, req);
        req -= temp;
        ans += (temp * arr[i].first);
    }
    if (req > 0)
        cout << -1;
    else
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