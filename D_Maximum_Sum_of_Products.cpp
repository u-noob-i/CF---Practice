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
    vector<long long> a(n), b(n), c(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        cin >> b[i];
    c[0] = a[0] * b[0];
    for (i = 1; i < n; i++)
        c[i] = c[i - 1] + (a[i] * b[i]);
    long long ans = c[n - 1];
    for (i = 0; i < n; i++)
    {
        int l = i, r = i;
        long long cs = 0, temp;
        while (l >= 0 && r < n)
        {
            if (l != r)
                cs += (a[l] * b[r]) + (a[r] * b[l]);
            else
                cs += a[l] * b[r];
            temp = 0;
            if (l > 0)
                temp += c[l - 1];
            temp += c[n - 1] - c[r];
            ans = max(cs + temp, ans);
            l--;
            r++;
        }
        l = i;
        r = i + 1;
        cs = 0;
        while (l >= 0 && r < n)
        {
            if (l != r)
                cs += (a[l] * b[r]) + (a[r] * b[l]);
            else
                cs += a[l] * b[r];
            temp = 0;
            if (l > 0)
                temp += c[l - 1];
            temp += c[n - 1] - c[r];
            ans = max(cs + temp, ans);
            l--;
            r++;
        }
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