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

int n, x, y, i, j;
char c;
string s;

void solve(int T)
{
    cin >> n >> s;
    x = y = 0;
    int ans = -1, l, r;
    map<pair<int, int>, int> arr;
    arr.insert({{x, y}, 0});
    for (i = 0; i < n; i++)
    {
        c = s[i];
        if (c == 'U')
        {
            x++;
        }
        else if (c == 'D')
        {
            x--;
        }
        else if (c == 'R')
        {
            y++;
        }
        else
        {
            y--;
        }
        auto itr = arr.find({x, y});
        if (itr != arr.end())
        {
            if (ans == -1 || ans > i - itr->second)
            {
                ans = i - itr->second;
                l = itr->second + 2;
                r = i + 1;
            }
            itr->second = i;
        }
        else
        {
            arr.insert({{x, y}, i});
        }
    }
    if (ans == -1)
    {
        cout << ans;
    }
    else
    {
        if ((r - l) % 2 == 0)
        {
            l--;
        }
        cout << l << " " << r;
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