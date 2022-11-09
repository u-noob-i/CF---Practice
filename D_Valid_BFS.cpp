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

vector<int> arr, order(200001), f;

bool sortbysec(const int &a, const int &b)
{
    return (order[a] < order[b]);
}

void solve(int T)
{
    int n, x, y, i, j;
    cin >> n;
    vector<vector<int>> adjlist(n);
    for (i = 0; i < n - 1; i++)
    {
        cin >> x >> y;
        x--;
        y--;
        adjlist[x].push_back(y);
        adjlist[y].push_back(x);
    }
    for (i = 0; i < n; i++)
    {
        cin >> x;
        x--;
        order[x] = i;
        arr.push_back(x);
    }
    if (arr[0])
    {
        cout << "No";
        return;
    }
    vector<bool> taken(n, 0);
    for (int i = 0; i < n; i++)
    {
        sort(adjlist[i].begin(), adjlist[i].end(), sortbysec);
    }
    queue<int> q;
    q.push(0);
    f.push_back(0);
    taken[0] = 1;
    while (!q.empty())
    {
        x = q.front();
        q.pop();
        for (int i = 0; i < adjlist[x].size(); i++)
        {
            if (!taken[adjlist[x][i]])
            {
                taken[adjlist[x][i]] = 1;
                q.push(adjlist[x][i]);
                f.push_back(adjlist[x][i]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (f[i] != arr[i])
        {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
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