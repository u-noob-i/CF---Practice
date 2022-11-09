#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <climits>

using namespace std;

void solve(int T)
{
    int n, t;
    cin >> n >> t;
    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    int cur = 0;
    while (1)
    {
        if (cur == t - 1)
        {
            cout << "YES";
            return;
        }
        if (cur >= t)
        {
            cout << "NO";
            return;
        }
        cur += arr[cur];
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