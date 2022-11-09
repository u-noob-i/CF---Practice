#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<vector<int>> vec(3, vector<int>(n + 1, 0));
    vec[0][0] = vec[1][0] = vec[2][0] = 0;
    for (int i = 0; i < n; i++)
    {
        vec[0][i + 1] = max(vec[0][i], vec[1][i]);
        vec[0][i + 1] = max(vec[0][i + 1], vec[2][i]);
        if (arr[i] == 1 || arr[i] == 3)
        {
            vec[1][i + 1] = max(vec[0][i] + 1, vec[2][i] + 1);
            vec[2][i + 1] = vec[2][i];
        }
        if (arr[i] == 2 || arr[i] == 3)
        {
            vec[2][i + 1] = max(vec[0][i] + 1, vec[1][i] + 1);
            vec[1][i + 1] = max(vec[1][i + 1], vec[1][i]);
        }
    }
    int ans = max(vec[0][n], vec[1][n]);
    ans = max(ans, vec[2][n]);
    cout << n - ans;
    return;
}

int main()
{
    solve();
}