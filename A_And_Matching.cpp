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
#include <climits>

using namespace std;

void solve(int T)
{
    int n, k;
    cin >> n >> k;
    if (n == 4 && k == 3)
    {
        cout << -1 << "\n";
        return;
    }
    if (k == n - 1)
    {
        cout << n - 1 << " " << n - 2 << "\n";
        cout << 1 << " " << n - 3 << "\n";
        cout << 0 << " " << 2 << "\n";
        for (int i = 3, j = n - 4; i < j; i++, j--)
        {
            cout << i << " " << j << "\n";
        }
    }
    else if (k == 0)
    {
        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            cout << i << " " << j << "\n";
        }
    }
    else
    {
        vector<int> arr;
        cout << k << " " << n - 1 << "\n";
        cout << 0 << " " << n - 1 - k << "\n";
        for (int i = 0; i < n; i++)
        {
            if (i != k && i != 0 && i != n - 1 && i != n - 1 - k)
            {
                arr.push_back(i);
            }
        }
        for (int i = 0, j = arr.size() - 1; i < j; i++, j--)
        {
            cout << arr[i] << " " << arr[j] << "\n";
        }
    }
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
    }
}