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

int n;
int arr[200001];

int bs(int i)
{
    int l = i, r = n - 1, mid, ans = i;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (arr[mid] - arr[i] <= 5)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans - i + 1;
}

void solve(int T)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, bs(i));
    }
    cout << ans;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;

    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}