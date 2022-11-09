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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    if (n == 2)
    {
        cout << arr[0] << " " << arr[1];
        return;
    }
    int dif = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[dif + 1] - arr[dif] > arr[i + 1] - arr[i])
        {
            dif = i;
        }
    }
    for (int i = dif + 1; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i <= dif; i++)
    {
        cout << arr[i] << " ";
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