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
    vector<pair<int, int>> a(n);
    vector<vector<int>> adjlist(n);
    for (i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    for (i = 0; i < n - 1; i++)
    {
        cin >> j >> k;
        j--;
        k--;
        adjlist[j].push_back(k);
        adjlist[k].push_back(j);
    }
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