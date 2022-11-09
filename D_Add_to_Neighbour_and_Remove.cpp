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
#include <stack>

using namespace std;

void solve(int T)
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = n - 1, cur = 0;
    for (int i = 0; i < n; i++)
    {
        cur += arr[i];
        int count = 1, temp = 0;
        bool f = 1;
        for (int j = i + 1; j < n; j++)
        {
            temp += arr[j];
            if (temp == cur)
            {
                count++;
                temp = 0;
            }
            else if (temp > cur)
            {
                f = 0;
                break;
            }
        }
        if (f && temp == 0)
        {
            ans = min(ans, n - count);
        }
    }
    cout << ans;
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