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

using namespace std;

void solve(int T)
{
    int n, x, y;
    cin >> n;
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pq.push(make_pair(x, i + 1));
    }
    long long ans = 0;
    vector<pair<int, int>> f;
    while (pq.size() > 1)
    {
        pair<int, int> x = pq.top();
        pq.pop();
        pair<int, int> y = pq.top();
        pq.pop();
        if (y.first == 0 || x.first == 0)
        {
            break;
        }
        ans++;
        f.push_back({x.second, y.second});
        pq.push(make_pair(x.first - 1, x.second));
        pq.push(make_pair(y.first - 1, y.second));
    }

    std::cout << ans;
    for (int i = 0; i < f.size(); i++)
    {
        std::cout << "\n"
                  << f[i].first << " " << f[i].second;
    }
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
        std::cout << "\n";
    }
}