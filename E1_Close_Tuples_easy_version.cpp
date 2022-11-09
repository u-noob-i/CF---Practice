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
    map<int, long long> a;
    for (i = 0; i < n; i++)
    {
        cin >> j;
        auto itr = a.find(j);
        if (itr == a.end())
            a.insert({j, 1});
        else
            itr->second++;
    }
    long long ans = 0;
    for (auto itr = a.begin(); itr != a.end(); itr++)
    {
        long long x = itr->second;
        ans += (x * (x - 1) * (x - 2)) / 6;
        auto btr = a.find(itr->first + 1), ctr = a.find(itr->first + 2);
        if (btr != a.end())
        {
            long long y = btr->second;
            ans += ((x * (x - 1) * y) + (x * (y - 1) * y)) / 2;
        }
        if (ctr != a.end())
        {
            long long z = ctr->second;
            ans += ((x * (x - 1) * z) + (x * (z - 1) * z)) / 2;
        }
        if (btr != a.end() && ctr != a.end())
        {
            long long y = btr->second, z = ctr->second;
            ans += (x * y * z);
        }
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}