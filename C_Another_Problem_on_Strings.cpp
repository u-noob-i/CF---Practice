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

void solve(int T)
{
    long long k, count = 0, ans = 0, t;
    int prev = 0;
    cin >> k >> s;
    n = s.length();
    if (k == 0)
    {
        for (i = 0; i < n; i++)
        {
            t = 0;
            while (i < n && s[i] == '0')
            {
                i++;
                t++;
            }
            ans += t * (t + 1ll) / 2ll;
        }
        cout << ans;
        return;
    }
    while (i < n && s[i] == '0')
        i++;
    for (j = i; j < n; j++)
    {
        if (s[j] == '1')
            count++;
        if (count == k)
        {
            t = i - prev + 1;
            ans += t;
        }
        else if (count > k)
        {
            prev = ++i;
            while (i < n && s[i] == '0')
                i++;

            count--;
            t = i - prev + 1;
            ans += t;
        }
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
    t = 1;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}