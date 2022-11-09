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
    int n;
    cin >> n;
    vector<vector<int>> arr(n + 1);
    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        arr[x].push_back(i);
    }
    for (int i = 1; i < n + 1; i++)
    {
        int count = 0;
        if (arr[i].size() == 0)
        {
            continue;
        }
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[arr[i][j]].size() == 0)
            {
                count++;
            }
        }
        if (count < 3)
        {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
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