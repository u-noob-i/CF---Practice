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
    int x, y, z;
    cin >> x >> y >> z;
    string ans = "";
    if (x)
    {
        ans += "00";
        x--;
        while (x--)
            ans += "0";
    }
    if (z)
    {
        ans += "11";
        if (ans[0] == '0')
            y--;
        z--;
        while (z--)
            ans += "1";
    }
    while (y--)
    {
        if (ans.length() == 0)
            ans += "10";
        else if (ans[ans.length() - 1] == '0')
            ans += "1";
        else
            ans += "0";
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}