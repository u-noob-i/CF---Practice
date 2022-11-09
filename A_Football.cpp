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
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x = 0, y = 0;
    string a, b;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[0])
        {
            a = arr[i];
            x++;
        }
        else
        {
            b = arr[i];
            y++;
        }
    }
    cout << (x > y ? a : b);
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