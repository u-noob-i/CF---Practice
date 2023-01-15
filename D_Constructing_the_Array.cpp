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

int n, i, j, k, p;
string s;

long long modu = 1000000007;

void solve(int T)
{
    cin >> n;
    vector<int> ans(n, 0);
    map<int, set<int>> a;
    a.insert({n, {1}});
    for (i = 1; i <= n; i++)
    {
        auto itr = a.rbegin();
        j = itr->first;
        k = *(itr->second).begin();
        if (j % 2)
            p = (k + k + j - 1) / 2;
        else
            p = (k + k + j - 2) / 2;
        ans[p - 1] = i;
        itr->second.erase(k);
        if((itr->second).size()==0)
            a.erase(j);
        if (j == 1)
            continue;
        if (j > 2)
            a[p - 1 - k + 1].insert(k);
        a[k + j - 1 - p - 1 + 1].insert(p + 1);
    }
    for (i = 0; i < n; i++)
        cout << ans[i] << " ";
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

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