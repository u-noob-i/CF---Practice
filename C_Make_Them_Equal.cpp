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

int n, m, k, i, j, x;

void solve(int T)
{
    char c;
    string s;
    cin >> n >> c >> s;
    set<int> a;
    for (i = 0; i < n; i++)
        if (s[i] != c)
            a.insert(i + 1);
    if (a.size() == 0)
        cout << 0;
    else
    {
        for (i = n; i > 0; i--)
        {
            bool f = 1;
            for (j = 1; i * j <= n; j++)
                if (a.find(i * j) != a.end())
                {
                    f = 0;
                    break;
                }
            if (f)
            {
                cout << 1 << "\n"
                     << i;
                return;
            }
        }
        cout << 2 << "\n"
             << n << " " << n - 1;
    }
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