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

using namespace std;

vector<int> divisors;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void commDiv(int a, int b)
{
    int n = gcd(a, b);
    int result = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (n / i != i)
                divisors.push_back(n / i);
        }
    }
    sort(divisors.begin(), divisors.end());
}

void solve(int T)
{
    int a, b, n;
    cin >> a >> b >> n;
    commDiv(a, b);
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        int l = 0, r = divisors.size() - 1, mid, ans = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (divisors[mid] >= x && divisors[mid] <= y)
            {
                ans = divisors[mid];
                l = mid + 1;
            }
            else if (divisors[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << "\n";
    }
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
    }
}