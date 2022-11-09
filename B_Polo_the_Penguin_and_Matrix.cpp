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
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> arr(m + n);
    int temp = -1, ans;
    for (int i = 0; i < n + m; i++)
    {
        cin >> arr[i];
        if (temp == -1)
        {
            temp = arr[i] % d;
        }
        else if (temp != arr[i] % d)
        {
            ans = -1;
        }
    }
    if (ans == -1)
    {
        cout << ans;
        return;
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