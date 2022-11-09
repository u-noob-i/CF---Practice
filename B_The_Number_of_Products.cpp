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

void solve(int T)
{
    int n, i, j;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long c1 = 0, c2 = 0, bal = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (bal % 2 == 0)
        {
            c1++;
        }
        else
        {
            c2++;
        }
        if (arr[i] < 0)
        {
            bal++;
        }
        if (bal % 2 == 0)
        {
            ans += c1;
        }
        else
        {
            ans += c2;
        }
    }
    long long x = n, y = n + 1;
    x *= y;
    x /= (long long)2;

    cout << x - ans << " " << ans;
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