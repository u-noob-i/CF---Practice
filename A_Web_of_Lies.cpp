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
#include <stack>

using namespace std;

void solve(int T)
{
    int n, m, x, y, q, t, ans = 0;
    cin >> n >> m;
    vector<int> nobles(n);
    while (m--)
    {
        cin >> x >> y;
        nobles[min(x, y)]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (nobles[i] > 0)
        {
            ans++;
        }
    }
    cin >> q;
    while (q--)
    {
        cin >> t;
        if (t == 3)
        {
            cout << n - ans << "\n";
            continue;
        }
        cin >> x >> y;
        if (t == 1)
        {
            nobles[min(x, y)]++;
            if (nobles[min(x, y)] == 1)
            {
                ans++;
            }
        }
        else
        {
            nobles[min(x, y)]--;
            if (nobles[min(x, y)] == 0)
            {
                ans--;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;

    for (int i = 1; i <= t; i++)
    {
        solve(t);
        // cout << "\n";
    }
}