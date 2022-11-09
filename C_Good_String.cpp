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
    cin >> s;
    n = s.length();
    vector<int> a(10, 0);
    for (i = 0; i < n; i++)
        a[s[i] - '0']++;
    int ans = n;
    for (i = 0; i < 10; i++)
        ans = min(ans, n - a[i]);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i == j)
                continue;
            int len = 0, cur = i;
            for (k = 0; k < n; k++)
            {
                if (s[k] == '0' + cur)
                {
                    len++;
                    if (cur == i)
                        cur = j;
                    else
                        cur = i;
                }
            }
            if (len % 2)
                len--;
            ans = min(ans, n - len);
        }
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