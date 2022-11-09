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
    cin >> n >> k >> s;
    for (i = 0; i < k; i++)
    {
        int x = 0, y = 0;
        for (j = i; j < n; j += k)
        {
            if (s[j] == '1')
                x++;
            else if (s[j] == '0')
                y++;
        }
        if (x && y)
        {
            cout << "NO";
            return;
        }
        for (j = i; j < n; j += k)
            if (x && s[j] == '?')
                s[j] = '1';
            else if (y && s[j] == '?')
                s[j] = '0';
    }
    int x = 0, y = 0;
    for (i = 0; i < k; i++)
        if (s[i] == '1')
            x++;
        else if (s[i] == '0')
            y++;
    if (x <= k / 2 && y <= k / 2)
        cout << "YES";
    else
        cout << "NO";
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