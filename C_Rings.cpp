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
    cin >> n >> s;
    m = n / 2;
    for (i = m; i < n; i++)
        if (s[i] == '0')
        {
            cout << 1 << " " << i + 1 << " " << 1 << " " << i;
            return;
        }
    for (i = n - m - 1; i >= 0; i--)
        if (s[i] == '0')
        {
            cout << i + 1 << " " << n << " " << i + 2 << " " << n;
            return;
        }
    cout << 1 << " " << m << " " << 2 << " " << m + 1;
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