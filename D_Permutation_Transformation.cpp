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

int ans[100], arr[100], n;

void findDep(int l, int r, int depth)
{
    if (l == r)
    {
        ans[l] = depth;
        return;
    }
    if (l > r)
    {
        return;
    }
    int maxi = l;
    for (int i = l + 1; i <= r; i++)
    {
        if (arr[maxi] < arr[i])
        {
            maxi = i;
        }
    }
    ans[maxi] = depth;
    findDep(l, maxi - 1, depth + 1);
    findDep(maxi + 1, r, depth + 1);
    return;
}

void solve(int T)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    findDep(0, n - 1, 0);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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