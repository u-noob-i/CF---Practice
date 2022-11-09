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
    vector<long long> a(n), b(n + 1);
    for (i = 0; i < n; i++)
        cin >> a[i];
    b[0] = 0;
    for (i = 1; i <= n; i++)
        b[i] += a[i - 1] + b[i - 1];
    long long ans = 0;
    map<long long, int> arr;
    arr.insert({0, 1});
    int l = 1;
    i = 1;
    while (l <= n)
    {
        while (i <= n && arr.find(b[i]) == arr.end())
        {
            auto itr = arr.find(b[i]);
            if (itr == arr.end())
                arr.insert({b[i], 1});
            else
                itr->second++;
            i++;
        }
        ans += i - l;
        auto itr = arr.find(b[l - 1]);
        itr->second--;
        if (itr->second == 0)
            arr.erase(itr);
        l++;
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
        cout << "\n";
    }
}