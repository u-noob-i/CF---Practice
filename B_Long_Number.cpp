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

int n, m, k, i, j, x;

void solve(int T)
{
    string s;
    cin >> n >> s;
    vector<char> arr(9);
    for (i = 0; i < 9; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        if (arr[s[i] - '1'] > s[i])
        {
            s[i] = arr[s[i] - '1'];
            i++;
            while (i < n && arr[s[i] - '1'] >= s[i])
            {
                s[i] = arr[s[i] - '1'];
                i++;
            }
            break;
        }
    }
    cout << s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;

    for (int p = 1; p <= t; p++)
    {
        solve(p);
    }
}