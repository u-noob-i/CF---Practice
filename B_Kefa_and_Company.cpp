#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <utility>
#include <map>
#include <set>
#include <queue>
#include <string>
#include <functional>

using namespace std;

int n, m, i, j, k;
string s;

void solve(int T)
{
    long long d;
    cin >> n >> d;
    vector<pair<long long, long long>> a(n + 1);
    for (i = 1; i <= n; i++)
        cin >> a[i].first >> a[i].second;
    a[0].second = 0;
    sort(a.begin(), a.end());
    for (i = 1; i <= n; i++)
        a[i].second += a[i - 1].second;
    long long ans = 0;
    for (i = 1; i <= n; i++)
    {
        int l = i, r = n, mid, temp;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (a[mid].first - a[i].first < d)
            {
                temp = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        ans = max(ans, a[temp].second - a[i - 1].second);
    }
    cout << ans;
}

int main()
{

    #ifndef 
    ONLINE_JUDGEfreopen(“input.txt”, “r”, stdin);
    freopen(“output.txt”, “w”, stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    t = 1;
    for (int p = 1; p <= t; p++)
    {
        solve(t);
        printf("\n");
    }
}