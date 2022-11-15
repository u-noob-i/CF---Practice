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

int n, i, j;
string s;

long long modu = 1000000007;

void solve(int T)
{
    long long h;
    cin >> n >> h;
    vector<long long> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    long long ans = h, l = 1, r = h, mid, temp;
    while (l <= r)
    {
        mid = (l + r) / 2;
        temp = 0;
        for (i = 0; i < n; i++)
            if (i == n - 1 || a[i + 1] - a[i] >= mid)
                temp += mid;
            else
                temp += a[i + 1] - a[i];
        if (temp >= h)
        {
            r = mid - 1;
            ans = mid;
        }
        else
        {
            l = mid + 1;
        }
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