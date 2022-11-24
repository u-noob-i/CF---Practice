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

long long modu = 1000000007;

void solve(int T)
{
    cin >> n >> m;
    vector<int> arr(n), brr(m);
    vector<vector<int>> a(n, vector<int>(m));
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            a[i][j] = 0;
    long long ans = 1;
    for (i = 0; i < n; i++)
    {
        cin >> j;
        arr[i] = j;
        j--;
        for (k = 0; k <= j; k++)
            a[i][k] = 1;
    }
    for (i = 0; i < m; i++)
    {
        cin >> j;
        brr[i] = j;
        j--;
        for (k = 0; k <= j; k++)
            a[k][i] = 1;
    }
    for (i = 0; i < n; i++)
    {
        k = 0;
        for (j = 0; j < m; j++)
            if (a[i][j] == 1)
                k++;
            else
                break;
        if (arr[i] != k)
        {
            cout << 0;
            return;
        }
    }
    for (i = 0; i < m; i++)
    {
        k = 0;
        for (j = 0; j < n; j++)
            if (a[j][i] == 1)
                k++;
            else
                break;
        if (brr[i] != k)
        {
            cout << 0;
            return;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
                continue;
            bool x = 1, y = 1, z = 1, w = 1;
            if (arr[i] == j)
                x = 0;
            if (brr[j] == i)
                y = 0;
            if (x && y && z && w)
                ans = (ans * 2ll) % modu;
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