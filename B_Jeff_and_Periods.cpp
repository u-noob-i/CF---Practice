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

int n, m, k, i, j, x;

void solve(int T)
{
    cin >> n;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    map<int, vector<int>> count;
    for (i = 0; i < n; i++)
    {
        auto itr = count.find(arr[i]);
        if (itr == count.end())
            count.insert({arr[i], {i + 1}});
        else
            itr->second.push_back(i + 1);
    }
    vector<pair<int, int>> ans;
    for (auto itr = count.begin(); itr != count.end(); itr++)
    {
        x = itr->first;
        vector<int> tp = itr->second;
        if (tp.size() == 1)
            ans.push_back({x, 0});
        else
        {
            bool f = 1;
            for (i = 2; i < tp.size(); i++)
                if (tp[i] - tp[i - 1] != tp[i - 1] - tp[i - 2])
                {
                    f = 0;
                    break;
                }
            if (f)
                ans.push_back({x, tp[1] - tp[0]});
        }
    }
    cout << ans.size() << "\n";
    for (i = 0; i < ans.size(); i++)
        cout << ans[i].first << " " << ans[i].second << "\n";
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
    }
}