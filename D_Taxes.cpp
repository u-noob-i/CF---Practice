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
    int ans = 1;
    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            ans = n / i;
            break;
        }
    if (ans == 1)
    {
        cout << ans;
        return;
    }
    if (n % 2 == 0)
    {
        cout << 2;
        return;
    }
    m = 0;
    for (i = 2; i <= sqrt(n - 2); i++)
        if ((n - 2) % i == 0)
        {
            m = 1;
            break;
        }
    if (!m)
        cout << 2;
    else
        cout << 3;
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