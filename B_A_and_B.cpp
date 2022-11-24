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
    long long a, b, d, ans = 1;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0;
        return;
    }
    d = abs(a - b);
    while (1)
    {
        long long sum = (ans) * (ans + 1) / 2;
        if (sum >= d && sum % 2 == d % 2)
            break;
        ans++;
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