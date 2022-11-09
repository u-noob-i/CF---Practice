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
#include <stack>

using namespace std;

void solve(int T)
{
    long long n, k, a, b, ans = 0;
    cin >> n >> k >> a >> b;
    if (k == 1)
    {
        ans = (n - 1) * a;
    }
    else
    {
        while (n > 1)
        {
            if (n < k)
            {
                ans += (n - 1) * a;
                n = 1;
            }
            else if (n % k)
            {
                long long y = n % k;
                n -= y;
                ans += (y * a);
            }
            else
            {
                long long y = n - (n / k);
                ans += min(b, y * a);
                n /= k;
            }
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

    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}