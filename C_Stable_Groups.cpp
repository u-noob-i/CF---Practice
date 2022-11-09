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
    long long k, x;
    cin >> n >> k >> x;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<long long> diff;
    long long ans = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] > x)
        {
            ans++;
            long long temp = arr[i + 1] - arr[i] - 1;
            temp /= x;
            diff.push_back(temp);
        }
    }
    sort(diff.begin(), diff.end());
    for (int i = 0; i < diff.size(); i++)
    {
        if (!k)
        {
            break;
        }
        k -= diff[i];
        if (k < 0)
        {
            break;
        }
        ans--;
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