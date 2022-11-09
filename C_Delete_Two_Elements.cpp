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
    int n;
    cin >> n;
    vector<long long> arr(n);
    map<long long, long long> m;
    long long k = 0, x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        k += x;
        auto itr = m.find(x);
        if (itr != m.end())
        {
            itr->second++;
        }
        else
        {
            m.insert({x, 1});
        }
    }
    if ((2 * k) % n)
    {
        cout << 0;
        return;
    }
    k = (2 * k) / n;
    long long ans = 0;
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        x = itr->first;
        if (2 * x == k)
        {
            if (itr->second > 1)
            {
                ans += (itr->second * (itr->second - 1));
            }
            continue;
        }
        x = k - x;
        auto pt = m.find(x);
        if (pt != m.end())
        {
            ans += (pt->second * itr->second);
        }
    }
    cout << ans / 2;
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