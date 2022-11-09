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
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= i)
        {
            k = i;
        }
        else
        {
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] >= n - i - 1)
        {
            if (i <= k)
            {
                cout << "Yes";
                return;
            }
        }
        else
        {
            break;
        }
    }
    cout << "No";
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