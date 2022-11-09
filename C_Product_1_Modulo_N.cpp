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
    return b == 0 ? a : gcd(b, a % b);
}

void solve(int T)
{
    long long n;
    cin >> n;
    long long pro = 1;
    set<long long> ans;
    for (long long i = 1; i < n; i++)
    {
        if (gcd(i, n) == 1)
        {
            pro *= i;
            ans.insert(i);
            pro %= n;
        }
    }
    if (pro == 1)
    {
        cout << ans.size() << "\n";
        for (auto itr = ans.begin(); itr != ans.end(); itr++)
        {
            cout << *itr << " ";
        }
    }
    else
    {
        cout << ans.size() - 1 << "\n";
        for (auto itr = ans.begin(); itr != ans.end(); itr++)
        {
            if (*itr != pro)
            {
                cout << *itr << " ";
            }
        }
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
        solve(i);
        cout << "\n";
    }
}