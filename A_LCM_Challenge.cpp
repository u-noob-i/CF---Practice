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

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

void solve(int T)
{
    long long n, ans = -1, one = 1;
    cin >> n;
    if (n == 1)
        ans = 1;
    else if (n % 2)
    {
        ans = lcm(n, n - 1);
        ans = lcm(ans, n - 2);
    }
    else
        for (long long i = max(one, n - 50); i <= n; i++)
            for (long long j = i; j <= n; j++)
                for (long long k = j; k <= n; k++)
                {
                    long long temp = lcm(i, j);
                    temp = lcm(temp, k);
                    ans = max(ans, temp);
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
    }
}