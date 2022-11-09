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

int n, x, i, j;

void solve(int T)
{
    cin >> n;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> temp, ans;
    for (i = n - 1; i >= 0; i--)
    {
        while (i > 0 && arr[i] > arr[i - 1])
        {
            temp.push_back(arr[i--]);
        }
        temp.push_back(arr[i]);
        for (j = temp.size() - 1; j >= 0; j--)
        {
            ans.push_back(temp[j]);
        }
        temp.clear();
    }
    for (i = 0; i < n; i++)
    {
        if (ans[i] != i + 1)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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