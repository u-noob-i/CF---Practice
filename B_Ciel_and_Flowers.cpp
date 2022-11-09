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
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0, x = min(a, b);
    x = min(x, c);
    ans += x;
    a -= x;
    b -= x;
    c -= x;
    ans += (a / 3) + (b / 3) + (c / 3);
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