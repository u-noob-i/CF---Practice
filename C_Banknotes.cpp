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

int n, m, i, j;
string s;

long long modu = 1000000007;

void solve(int T)
{
    long long k, x;
    cin >> n >> k;
    vector<long long> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> x;
        a[i] = pow(10ll, x);
    }
    k++;
    long long ans = 0;
    for (i = 0; i < n - 1; i++)
    {
        x = min(k, (a[i + 1] / a[i]) - 1);
        ans += x * a[i];
        k -= x;
    }
    ans += k * a[n - 1];
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