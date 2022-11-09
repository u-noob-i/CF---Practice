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
    vector<int> a(n), b(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    map<int, int> arr;
    for (i = 0; i < n; i++)
    {
        auto itr = arr.find(a[i]);
        if (itr == arr.end())
            arr.insert({a[i], 1});
        else
            itr->second++;
    }
    int x = 0, y = 0;
    for (auto itr = arr.begin(); itr != arr.end(); itr++)
        if (itr->second > 1)
            x++;
        else
            y++;
    cout << x + (y / 2) + (y % 2);
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