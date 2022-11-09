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

int n, m, x, y, i, j;

void solve(int T)
{
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << 1 << " " << 1 << "\n"
         << -arr[0] << "\n";
    arr[0] = n;
    if (n == 1)
    {
        cout << 1 << " " << 1 << "\n"
             << 0 << "\n";
        cout << 1 << " " << 1 << "\n"
             << 0 << "\n";
        return;
    }
    cout << 1 << " " << n << "\n"
         << 0 << " ";
    for (i = 1; i < n; i++)
    {
        cout << -(n * arr[i]) << " ";
        arr[i] -= (n * arr[i]);
    }
    cout << "\n";
    cout << 2 << " " << n << "\n";
    for (i = 1; i < n; i++)
    {
        cout << -arr[i] << " ";
    }
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