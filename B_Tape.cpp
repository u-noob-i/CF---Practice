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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<pair<int, int>> dif(n - 1);
    vector<int> f(n);
    for (int i = 0; i < n; i++)
    {
        f[i] = i;
    }
    for (int i = 1; i < n; i++)
    {
        dif[i - 1] = {arr[i] - arr[i - 1], i};
    }
    sort(dif.begin(), dif.end());
    int ans = n;
    int i = 0;
    while (ans > k)
    {
        f[dif[i].second] = f[dif[i].second - 1];
        ans--;
        i++;
    }
    int l = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int x = arr[i];
        while (f[i] != i)
        {
            i = f[i];
        }
        l += (x - arr[i] + 1);
    }
    cout << l;
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