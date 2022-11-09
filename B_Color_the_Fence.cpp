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
string s;

void solve(int T)
{
    cin >> n;
    vector<pair<int, int>> arr(9), brr(9);
    for (i = 0; i < 9; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
        brr[i] = arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<int> ans;
    while (n - arr[0].first >= 0)
    {
        n -= arr[0].first;
        ans.push_back(arr[0].second);
    }
    i = 8;
    j = 0;
    while (i >= 0 && j < ans.size())
    {
        if (brr[i].first - arr[0].first <= n)
        {
            n -= brr[i].first - arr[0].first;
            ans[j++] = brr[i].second;
        }
        else
            i--;
    }
    sort(ans.begin(), ans.end(), greater<int>());
    if (ans.size() == 0)
        cout << -1;
    else
        for (i = 0; i < ans.size(); i++)
            cout << ans[i];
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