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
    long long z;
    cin >> n >> z;
    vector<long long> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    long long ans = 0;
    if (n <= z)
    {
        ans = 1;
        for (i = 0; i < n; i++)
            for (j = i + 1; j < n; j++)
                ans = (ans * abs(a[i] - a[j])) % z;
    }
    cout << ans;
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