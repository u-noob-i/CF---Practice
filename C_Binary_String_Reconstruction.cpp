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
    cin >> s >> m;
    n = s.length();
    string ans = "";
    for (i = 0; i < n; i++)
        ans += "2";
    for (i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (i + m < n)
            {
                if (ans[i + m] == '1')
                {
                    cout << "-1";
                    return;
                }
                else
                    ans[i + m] = '0';
            }
            if (i - m >= 0)
            {
                if (ans[i - m] == '1')
                {
                    cout << "-1";
                    return;
                }
                else
                    ans[i - m] = '0';
            }
        }
        else
        {
            if (i + m < n && i - m >= 0 && (ans[i + m] == '1' || ans[i - m] == '1'))
                continue;
            else if (i - m >= 0 && ans[i - m] != '0')
                ans[i - m] = '1';
            else if (i + m < n && ans[i + m] != '0')
                ans[i + m] = '1';
            else
            {
                cout << -1;
                return;
            }
        }
    }
    for (i = 0; i < n; i++)
        if (ans[i] == '2')
            ans[i] = '0';
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