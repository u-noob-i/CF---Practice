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

int n, m, i, j;

void solve(int T)
{
    cin >> n >> m;
    vector<long long> arr(n);
    vector<vector<long long>> adjlist(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (m--)
    {
        cin >> i >> j;
        i--;
        j--;
        adjlist[i].push_back(j);
        adjlist[j].push_back(i);
    }
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>> pq;
    vector<bool> taken(n, false);
    for (i = 0; i < n; i++)
    {
        pq.push({arr[i], i});
    }
    long long ans = 0;
    while (!pq.empty())
    {
        pair<long long, long long> t = pq.top();
        pq.pop();
        j = t.second;
        taken[j] = 1;
        for (i = 0; i < adjlist[j].size(); i++)
        {
            if (!taken[adjlist[j][i]])
            {
                ans += arr[adjlist[j][i]];
            }
        }
    }
    cout << ans;
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