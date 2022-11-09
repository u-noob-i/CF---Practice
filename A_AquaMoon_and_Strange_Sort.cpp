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
    vector<int> a(n);
    map<int, int> x, y, z, w;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2)
        {
            auto itr = x.find(a[i]);
            if (itr != x.end())
                itr->second++;
            else
                x.insert({a[i], 1});
        }
        else
        {
            auto itr = y.find(a[i]);
            if (itr != y.end())
                itr->second++;
            else
                y.insert({a[i], 1});
        }
    }
    sort(a.begin(), a.end());
    for (i = 0; i < n; i++)
    {
        if (i % 2)
        {
            auto itr = z.find(a[i]);
            if (itr != z.end())
                itr->second++;
            else
                z.insert({a[i], 1});
        }
        else
        {
            auto itr = w.find(a[i]);
            if (itr != w.end())
                itr->second++;
            else
                w.insert({a[i], 1});
        }
    }
    for (auto itr = x.begin(), jtr = z.begin(); itr != x.end(); itr++, jtr++)
    {
        if (itr->second != jtr->second || itr->first != jtr->first)
        {
            cout << "NO";
            return;
        }
    }
    for (auto itr = y.begin(), jtr = w.begin(); itr != y.end(); itr++, jtr++)
    {
        if (itr->second != jtr->second || itr->first != jtr->first)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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