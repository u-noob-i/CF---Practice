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
    cin >> n >> x;
    vector<int> arr(n);
    y = 0;
    j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] -= x;
        if (arr[i] == 0)
        {
            j = 1;
        }
        y += arr[i];
    }
    sort(arr.begin(), arr.end());
    if (arr[0] == arr[n - 1] && arr[0] == 0)
    {
        cout << 0;
    }
    else if (y == 0 || j == 1)
    {
        cout << 1;
    }
    else
    {
        cout << 2;
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
        cout << "\n";
    }
}