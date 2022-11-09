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
#include <stack>

using namespace std;

void solve(int T)
{
    int n;
    cin >> n;
    vector<pair<long long, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end());
    long long cur = arr[0].first;
    int ind = 0;
    for (int i = 1; i < n; i++)
    {
        if (cur < arr[i].first)
        {
            ind = i;
        }
        cur += arr[i].first;
    }
    cout << n - ind << "\n";
    vector<int> ans;
    for (; ind < n; ind++)
    {
        ans.push_back(arr[ind].second);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
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
        cout << "\n";
    }
}