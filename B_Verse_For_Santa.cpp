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
    long long s;
    cin >> n >> s;
    vector<long long> arr(n), sum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            sum[i] = arr[i];
        }
        else
        {
            sum[i] = sum[i - 1] + arr[i];
        }
    }
    if (sum[n - 1] <= s)
    {
        cout << 0;
        return;
    }
    int ans = 0, ind = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum[i] - arr[i] > s)
        {
            break;
        }
        if (sum[i] - arr[i] == s)
        {
            if (ans < i)
            {
                ans = i;
                ind = i + 1;
            }
            continue;
        }
        int x = i, l = i + 1, r = n - 1, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (sum[mid] - arr[i] > s)
            {
                r = mid - 1;
            }
            else if (sum[mid] - arr[i] < s)
            {
                x = mid;
                l = mid + 1;
            }
            else
            {
                x = mid;
                break;
            }
        }
        if (x > ans)
        {
            ans = x;
            ind = i + 1;
        }
    }
    cout << ind;
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