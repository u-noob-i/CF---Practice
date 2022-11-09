#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;

int n, m, i, j;

void solve(int T)
{
    long long a, b, k, x, ans = 0;
    cin >> n >> a >> b >> k;
    vector<long long> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        x = arr[i] % (a + b);
        if (x > 0 && x <= a)
        {
            arr[i] = 0;
        }
        else
        {
            if (x == 0)
            {
                x = a + b;
            }
            arr[i] = x / a;
            if (x % a)
            {
                arr[i]++;
            }
            arr[i]--;
        }
    }
    sort(arr.begin(), arr.end());
    for (i = 0; i < n; i++)
    {
        if (k - arr[i] >= 0)
        {
            k -= arr[i];
            ans++;
        }
        else
        {
            break;
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