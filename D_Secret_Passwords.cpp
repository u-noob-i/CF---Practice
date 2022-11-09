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

int m, i, j, k;
string s;

class DisjSet
{
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
        for (i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int x)
    {
        if (parent[x] != x)
            parent[x] = find(parent[x]);

        return parent[x];
    }

    void Union(int x, int y)
    {
        int xset = find(x);
        int yset = find(y);

        if (xset == yset)
            return;

        if (rank[xset] < rank[yset])
            parent[xset] = yset;
        else if (rank[xset] > rank[yset])
            parent[yset] = xset;

        else
        {
            parent[yset] = xset;
            rank[xset] = rank[xset] + 1;
        }
    }
};

void solve(int T)
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(26));
    for (i = 0; i < n; i++)
        for (j = 0; j < 26; j++)
            a[i][j] = 0;
    for (i = 0; i < n; i++)
    {
        cin >> s;
        for (j = 0; j < s.length(); j++)
            a[i][s[j] - 'a']++;
    }
    DisjSet d(n);
    for (i = 0; i < 26; i++)
    {
        int prev = -1;
        for (j = 0; j < n; j++)
        {
            if (a[j][i] > 0)
            {
                if (prev != -1)
                    d.Union(j, prev);
                prev = j;
            }
        }
    }
    vector<int> b(n);
    for (i = 0; i < n; i++)
        b[i] = d.find(i);
    sort(b.begin(), b.end());
    cout << distance(b.begin(), unique(b.begin(), b.end()));
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