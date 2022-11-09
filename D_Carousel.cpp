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
    int n;
    cin >> n;
    vector<int> arr(n), ans(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 1, doub = 0;
    ans[0] = ans[n] = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            doub++;
            ans[i] = ans[i - 1];
        }
        else
        {
            if (ans[i - 1] > 1)
            {
                ans[i] = ans[i - 1] - 1;
            }
            else
            {
                ans[i] = 2;
                count = 2;
            }
        }
    }
    if (ans[n - 1] == ans[n] && arr[n - 1] != arr[0])
    {
        if (doub)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (ans[i] == ans[i + 1])
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        if (ans[j] == 1)
                        {
                            ans[j] = 2;
                        }
                        else
                        {
                            ans[j] = 1;
                        }
                    }
                    break;
                }
            }
        }
        else
        {
            ans[n - 1] = 3;
            count++;
        }
    }
    cout << count << "\n";
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