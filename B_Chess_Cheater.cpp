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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> arr;
    int i = 0, c = 0, w = 0;
    while (i < n)
    {
        int j = i;
        while (i < n && s[i] == 'L')
        {
            i++;
            c++;
        }
        if (j != i)
        {
            arr.push_back(i - j);
        }
        j = i;
        while (i < n && s[i] == 'W')
        {
            i++;
        }
        if (j != i)
        {
            w++;
        }
    }
    if (c <= k)
    {
        cout << (2 * n) - 1;
        return;
    }
    if (c == n)
    {
        cout << max(0, (2 * k) - 1);
        return;
    }
    if (s[0] == 'L')
    {
        arr[0] = 1e8;
    }
    if (s[n - 1] == 'L')
    {
        arr[arr.size() - 1] = 1e8;
    }
    sort(arr.begin(), arr.end());
    int ans = 2 * (k + n - c);
    ans -= w;
    for (i = 0; i < arr.size(); i++)
    {
        if (arr[i] - k <= 0)
        {
            k -= arr[i];
            ans++;
            continue;
        }
        break;
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