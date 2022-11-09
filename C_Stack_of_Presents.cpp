#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;

void solve(int T)
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<int> p;
    long long ans = 0;
    int i = 0;
    while (m--)
    {
        int x;
        cin >> x;
        auto itr = p.find(x);
        if (itr != p.end())
        {
            ans++;
            p.erase(itr);
            continue;
        }
        while (i < n && arr[i] != x)
        {
            p.insert(arr[i]);
            i++;
        }
        ans += ((2 * p.size()) + 1);
        i++;
    }
    cout << ans;
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