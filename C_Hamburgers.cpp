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

void solve(int T)
{
    string s;
    long long a, b, c, pa, pb, pc, coins, ar = 0, br = 0, cr = 0, z = 0;
    cin >> s >> a >> b >> c >> pa >> pb >> pc >> coins;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'B')
        {
            ar++;
        }
        else if (s[i] == 'S')
        {
            br++;
        }
        else
        {
            cr++;
        }
    }
    long long mid, ans = 0, l = 0, r = 1000000000000000;
    while (l <= r)
    {
        mid = (l + r) / 2;
        long long temp = (max(z, (ar * mid) - a) * pa) + (max(z, (br * mid) - b) * pb) + (max(z, (cr * mid) - c) * pc);
        if (temp <= coins)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
        cout << "\n";
    }
}