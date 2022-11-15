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
    vector<int> b(n), c(n, 1);
    b[0] = 1;
    for (i = 1; i < n; i++)
        if (a[i] > a[i - 1])
            b[i] = b[i - 1] + 1;
        else
            b[i] = 1;
    for (i = n - 1; i >= 0; i--)
    {
        if (b[i] > 1)
        {
            j = i - b[i] + 1;
            int x = b[i];
            i = j;
            while (x > 1)
            {
                c[j] = max(c[j], x);
                j++;
                x--;
            }
        }
    }
    int ans = max(c[0], b[n - 1]);
    for (i = 1; i < n - 1; i++)
    {
        ans = max(ans, b[i]);
        if (a[i - 1] < a[i + 1])
            ans = max(ans, b[i - 1] + c[i + 1]);
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