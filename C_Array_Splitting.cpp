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
    int n;
    long long k, x, temp, ans = 0;
    cin >> n >> k >> x;
    vector<long long> arr(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        temp = x;
        x = arr[i];
        arr[i] -= temp;
    }
    k--;
    sort(arr.begin(), arr.end());
    for (int i = n - 2; i >= 0; i--)
    {
        if (k > 0)
        {
            k--;
        }
        else
        {
            ans += arr[i];
        }
    }
    cout << ans;
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