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

long long modu = 1000000007;

class DisjSet {
    int *rank, *parent, n;

public:
    DisjSet(int n)
    {
        rank = new int[n];
        parent = new int[n];
        this->n = n;
        makeSet();
    }
    void makeSet()
    {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    int find(int x)
    {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }

        return parent[x];
    }
    void Union(int x, int y)
    {
        int xset = find(x);
        int yset = find(y);
        if (xset == yset)
            return;
        if (rank[xset] < rank[yset]) {
            parent[xset] = yset;
        }
        else if (rank[xset] > rank[yset]) {
            parent[yset] = xset;
        }

        else {
            parent[yset] = xset;
            rank[xset] = rank[xset] + 1;
        }
    }
};

void solve(int T)
{
    int m1, m2;
    cin >> n >> m1 >> m2;
    DisjSet am1(n), am2(n);
    for (i = 0; i < m1; i++)
    {
        cin >> j >> k;
        j--;
        k--;
        am1.Union(j, k);
    }
    for (i = 0; i < m2; i++)
    {
        cin >> j >> k;
        j--;
        k--;
        am2.Union(j, k);
    }

    vector<pair<int, int>> pt;
    int ans = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (am1.find(i) != am1.find(j) && am2.find(i) != am2.find(j))
            {
                ans++;
                pt.push_back({i + 1, j + 1});
                am1.Union(i, j);
                am2.Union(i, j);
            }
        }
    }
    cout << ans;
    for (i = 0; i < pt.size(); i++)
        cout << "\n" << pt[i].first << " " << pt[i].second;
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
    t = 1;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}