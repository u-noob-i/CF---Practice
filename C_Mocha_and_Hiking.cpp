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

int n, i, j;
string s;

long long modu = 1000000007;

void solve(int T)
{
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    if (a[0] == 1)
    {
        cout << n + 1 << " ";
        for (i = 1; i <= n; i++)
            cout << i << " ";
        return;
    }
    if (a[n - 1] == 0)
    {
        for (i = 1; i <= n; i++)
            cout << i << " ";
        cout << n + 1;
        return;
    }
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] == 0 && a[i + 1] == 1)
        {
            for (j = 0; j <= i; j++)
                cout << j + 1 << " ";
            cout << n + 1 << " ";
            for (j = i + 1; j < n; j++)
                cout << j + 1 << " ";
            return;
        }
    }
    cout << -1;
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
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}