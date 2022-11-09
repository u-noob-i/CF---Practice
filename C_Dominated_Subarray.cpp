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
    int n;
    cin >> n;
    vector<vector<int>> arr(n + 1);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x].push_back(i);
    }
    int ans = -1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i].size() <= 1)
        {
            continue;
        }
        for (int j = 1; j < arr[i].size(); j++)
        {
            if (ans == -1)
            {
                ans = arr[i][j] - arr[i][j - 1] + 1;
            }
            else
            {
                ans = min(ans, arr[i][j] - arr[i][j - 1] + 1);
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
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}