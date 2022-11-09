#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;

vector<long long> factors;

void factorize(long long n)
{
    int count = 0;
    while (!(n % 2))
    {
        n >>= 1;
        count++;
    }
    while (count--)
    {
        factors.push_back(2);
    }
    for (long long i = 3; i <= sqrt(n); i += 2)
    {
        count = 0;
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
        while (count--)
        {
            factors.push_back(i);
        }
    }
    if (n > 2)
    {
        factors.push_back(n);
    }
}

void solve(int T)
{
    long long n;
    cin >> n;
    factorize(n);
    if (factors.size() <= 1)
    {
        cout << 1 << "\n"
             << 0;
    }
    else if (factors.size() == 2)
    {
        cout << 2;
    }
    else
    {
        cout << 1 << "\n"
             << factors[0] * factors[1];
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
        cout << "\n";
    }
}