#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;

void solve(int T)
{
    int n, p, k;
    long long x, y;
    string s;
    cin >> n >> p >> k >> s >> x >> y;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = -1;
    }
    for (int i = n - 1; i >= p - 1; i--)
    {
        long long cur = 0;
        if (s[i] == '0')
        {
            cur += x;
        }
        if (i + k >= n)
        {
            arr[i] = cur;
        }
        else
        {
            arr[i] = cur + arr[i + k];
        }
    }
    long long ans = arr[p - 1];
    for (int i = p; i < n; i++)
    {
        ans = min(ans, arr[i] + (y * max(0, i - p + 1)));
    }
    cout << ans;
}

int main()
{
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