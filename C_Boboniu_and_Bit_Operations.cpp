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
string s;

void solve(int T)
{
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < m; i++)
        cin >> b[i];
    int ans = 0;
    for (ans = 0; ans < pow(2, 9); ans++)
    {
        int ct = 0;
        for (i = 0; i < n; i++)
        {
            bool f = 0;
            for (j = 0; j < m; j++)
            {
                if (((a[i] & b[j]) | ans) == ans)
                {
                    f = 1;
                    break;
                }
            }
            if (f)
                ct++;
        }
        if (ct == n)
        {
            cout << ans;
            break;
        }
    }
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