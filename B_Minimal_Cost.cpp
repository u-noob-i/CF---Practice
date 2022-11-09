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
    int n, u, v;
    cin >> n >> u >> v;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool f = 1, c = 1;
    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i] - arr[i - 1]) > 1)
        {
            f = 0;
            break;
        }
        if (abs(arr[i] - arr[i - 1]) == 1)
        {
            c = 0;
        }
    }
    int ans = min(2 * v, u + v);
    if (!f)
    {
        ans = 0;
    }
    else if (!c)
    {
        ans = min(ans, u);
        ans = min(ans, v);
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