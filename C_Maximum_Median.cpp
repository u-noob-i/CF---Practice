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
    long long k;
    cin >> n >> k;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int x = n / 2, cur = 1;
    while (k > 0 && cur + x < n)
    {
        long long temp = (arr[cur + x] - arr[x]);
        long long z = temp * cur;
        if (k >= z)
        {
            k -= z;
            arr[x] += temp;
            cur++;
            continue;
        }
        long long p = k / cur;
        arr[x] += p;
        k = 0;
        break;
    }
    if (k > 0)
    {
        k /= (x + 1);
        arr[x] += k;
    }
    cout << arr[x];
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