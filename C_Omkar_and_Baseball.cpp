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
    vector<int> a(n), b;
    for (i = 0; i < n; i++)
        cin >> a[i];
    b = a;
    sort(b.begin(), b.end());
    int l = -1, r = -1;
    i = 0;
    while (i < n && a[i] == i + 1)
        i++;
    l = i;
    if (i == n)
    {
        cout << 0;
        return;
    }
    while (i < n && a[i] != i + 1)
        i++;
    r = i;
    sort(a.begin() + l, a.begin() + r);
    if (a == b)
        cout << 1;
    else
        cout << 2;
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