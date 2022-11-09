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

void solve(int T)
{
    int x, y, k;
    cin >> n >> m >> k;
    for (i = 0; i < k; i++)
        cin >> x >> y;
    for (i = 0; i < k; i++)
        cin >> x >> y;
    cout << (n * m) + n + m - 3 << "\n";
    for (i = 0; i < n - 1; i++)
        cout << "U";
    for (i = 0; i < m - 1; i++)
        cout << "L";
    bool f = 0;
    for (i = 0; i < n; i++)
    {
        if (i)
            cout << "D";
        if (f)
            for (j = 0; j < m - 1; j++)
                cout
                    << "L";
        else
            for (j = 0; j < m - 1; j++)
                cout << "R";
        f = !f;
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
        solve(i);
        cout << "\n";
    }
}