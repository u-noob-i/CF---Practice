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

using namespace std;

void solve(int T)
{
    long long D, g, b, ans = 0, n;
    cin >> D >> g >> b;
    n = D;
    n /= 2;
    if (D % 2)
    {
        n++;
    }
    long long x = n / g;
    ans += (x * (g + b));
    if (n % g == 0)
    {
        ans -= b;
    }
    else
    {
        ans += (n % g);
    }
    cout << max(D, ans);
}

int main()
{
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