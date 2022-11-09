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
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> arr(200002, 0);
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        arr[l]++;
        arr[r + 1]--;
    }
    for (int i = 1; i < 200002; i++)
    {
        arr[i] += arr[i - 1];
    }
    for (int i = 0; i < 200002; i++)
    {
        if (arr[i] >= k)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }
    for (int i = 1; i < 200002; i++)
    {
        arr[i] += arr[i - 1];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << arr[r] - arr[l - 1] << "\n";
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
        cout << '\n';
    }
}