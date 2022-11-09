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

int n, m, p, i, j;

void solve(int T)
{
    cin >> n >> m;
    vector<vector<int>> adjlist(n);
    for (i = 0; i < m; i++)
    {
        cin >> p >> j;
        p--;
        j--;
        adjlist[p].push_back(j);
        adjlist[j].push_back(p);
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