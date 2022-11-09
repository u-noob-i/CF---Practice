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
    cin >> n;
    vector<vector<int>> a(n, vector<int>(5));
    for (i = 0; i < n; i++)
        for (j = 0; j < 5; j++)
            cin >> a[i][j];
    int ans = 0;
    for (i = 1; i < n; i++)
    {
        int x = 0, y = 0;
        for (j = 0; j < 5; j++)
            if (a[ans][j] < a[i][j])
                x++;
            else
                y++;
        if (x < y)
            ans = i;
    }
    for (i = 0; i < n; i++)
    {
        if (i == ans)
            continue;
        int x = 0, y = 0;
        for (j = 0; j < 5; j++)
            if (a[ans][j] < a[i][j])
                x++;
            else
                y++;
        if (x < y)
        {
            ans = -2;
            break;
        }
    }
    ans++;
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