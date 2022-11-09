#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <utility>
#include <map>
#include <set>
#include <queue>
#include <string>
#include <functional>

using namespace std;

int n, m, i, j, k;
string s;

void solve(int T)
{
    cin >> n >> k >> s;
    int x = 0, y = 0, prev;
    vector<bool> a(n, 0), b(n, 0);
    for (i = 0, j = n - 1; i <= j; i++, j--)
        if (s[i] == s[j])
            a[i] = a[j] = b[i] = b[j] = 1;
    if (k <= n / 2)
    {
        prev = k - 1;
        for (i = prev; i < n / 2; i++)
            if (!a[i])
            {
                x += abs(i - prev) + min(abs(s[i] - s[n - i - 1]),
                                         26 - abs(s[i] - s[n - i - 1]));
                prev = i;
                a[i] = a[n - i - 1] = 1;
            }
        for (i = prev; i >= 0; i--)
            if (!a[i])
            {
                x += abs(i - prev) + min(abs(s[i] - s[n - i - 1]),
                                         26 - abs(s[i] - s[n - i - 1]));
                prev = i;
                a[i] = a[n - i - 1] = 1;
            }
        prev = k - 1;
        for (i = prev; i >= 0; i--)
            if (!b[i])
            {
                y += abs(i - prev) + min(abs(s[i] - s[n - i - 1]),
                                         26 - abs(s[i] - s[n - i - 1]));
                prev = i;
                b[i] = b[n - i - 1] = 1;
            }
        for (i = prev; i < n / 2; i++)
            if (!b[i])
            {
                y += abs(i - prev) + min(abs(s[i] - s[n - i - 1]),
                                         26 - abs(s[i] - s[n - i - 1]));
                prev = i;
                b[i] = b[n - i - 1] = 1;
            }
    }
    else
    {
        int prev = k - 1;
        for (i = prev; i >= n / 2; i--)
            if (!a[i])
            {
                x += abs(i - prev) + min(abs(s[i] - s[n - i - 1]),
                                         26 - abs(s[i] - s[n - i - 1]));
                prev = i;
                a[i] = a[n - i - 1] = 1;
            }
        for (i = prev; i < n; i++)
            if (!a[i])
            {
                x += abs(i - prev) + min(abs(s[i] - s[n - i - 1]),
                                         26 - abs(s[i] - s[n - i - 1]));
                prev = i;
                a[i] = a[n - i - 1] = 1;
            }
        prev = k - 1;
        for (i = prev; i < n; i++)
            if (!b[i])
            {
                y += abs(i - prev) + min(abs(s[i] - s[n - i - 1]),
                                         26 - abs(s[i] - s[n - i - 1]));
                prev = i;
                b[i] = b[n - i - 1] = 1;
            }
        for (i = prev; i >= n / 2; i--)
            if (!b[i])
            {
                y += abs(i - prev) + min(abs(s[i] - s[n - i - 1]),
                                         26 - abs(s[i] - s[n - i - 1]));
                prev = i;
                b[i] = b[n - i - 1] = 1;
            }
    }
    cout << min(x, y);
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
    for (int p = 1; p <= t; p++)
    {
        solve(t);
        cout << "\n";
    }
}