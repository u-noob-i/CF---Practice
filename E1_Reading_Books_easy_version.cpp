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

int n, m, i, j, k;
string s;

void solve(int T)
{
    int x, y, ans;
    bool a, b;
    cin >> n >> k;
    vector<int> arr, brr, crr;
    for (i = 0; i < n; i++)
    {
        cin >> x >> a >> b;
        if (a && b)
            arr.push_back(x);
        else if (a)
            brr.push_back(x);
        else if (b)
            crr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    sort(crr.begin(), crr.end());
    x = 0;
    y = 0;
    ans = 0;
    int ind = 0;
    i = 0;
    j = 0;
    while (x < k && y < k)
    {
        if (x >= k)
        {
            if (ind < arr.size() && j < crr.size())
                if (arr[ind] < crr[j])
                    ans += arr[ind++];
                else
                    ans += crr[j++];
            else if (ind < arr.size())
                ans += arr[ind++];
            else if (j < crr.size())
                ans += crr[j++];
            else
                break;
            y++;
        }
        else if (y >= k)
        {
            if (ind < arr.size() && i < brr.size())
                if (arr[ind] < brr[i])
                    ans += arr[ind++];
                else
                    ans += brr[i++];
            else if (ind < arr.size())
                ans += arr[ind++];
            else if (i < brr.size())
                ans += brr[i++];
            else
                break;
            x++;
        }
        else
        {
            if (ind < arr.size() && i < brr.size() && j < crr.size())
                if (arr[ind] < brr[i] + crr[j])
                    ans += arr[ind++];
                else
                    ans += brr[i++] + crr[j++];
            else if (ind < arr.size())
                ans += arr[ind++];
            else if (i < brr.size() && j < crr.size())
                ans += brr[i++] + crr[j++];
            else
                break;
            x++;
            y++;
        }
    }
    if (x >= k && y >= k)
        cout << ans;
    else
        cout << -1;
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
        cout << "\n";
    }
}