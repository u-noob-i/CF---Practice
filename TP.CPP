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

long long maxPrimeFactors(long long n)
{
    long long maxPrime = -1;
    while (n % 2 == 0)
    {
        maxPrime = 2;
        n >>= 1;
    }
    while (n % 3 == 0)
    {
        maxPrime = 3;
        n = n / 3;
    }
    for (int i = 5; i <= sqrt(n); i += 6)
    {
        while (n % i == 0)
        {
            maxPrime = i;
            n = n / i;
        }
        while (n % (i + 2) == 0)
        {
            maxPrime = i + 2;
            n = n / (i + 2);
        }
    }
    if (n > 4)
        maxPrime = n;

    return maxPrime;
}

long long rec(long long n)
{
    if (n == 1 || n == 2 || n == 3)
        return n;
    long long x = maxPrimeFactors(n);
    if (x == n)
        return rec(n - 1) + 1;
    else
        return 1 + rec(x);
}

void solve(int T)
{
    int n;
    cin >> n;
    cout << rec(n);
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