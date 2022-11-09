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
    int n, x;
    cin >> n;
    vector<int> arr(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[x]++;
    }
    sort(arr.rbegin(), arr.rend());
    int cur, ans;
    ans = cur = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == 0 || cur <= 1)
        {
            break;
        }
        cur = min(arr[i], cur - 1);
        ans += cur;
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