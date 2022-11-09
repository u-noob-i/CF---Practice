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
    bool arr[10001], flag = 1;
    int count = 0, ans = 0;
    set<int> p;
    vector<int> res;
    for (int i = 0; i < 10001; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            if (arr[x] == 0)
            {
                if (p.find(x) != p.end())
                {
                    flag = 0;
                }
                else
                {
                    arr[x] = 1;
                    p.insert(x);
                    count++;
                }
            }
            else
            {
                flag = 0;
            }
        }
        else
        {
            x = abs(x);
            if (arr[x] == 0)
            {
                flag = 0;
            }
            else
            {
                count--;
                arr[x] = 0;
            }
            if (count == 0)
            {
                p.clear();
                ans++;
                res.push_back(i + 1);
            }
        }
    }
    if (count > 0)
    {
        flag = 0;
    }
    if (!flag)
    {
        cout << -1;
    }
    else
    {
        cout << ans << "\n";
        cout << res[0] << " ";
        for (int i = 1; i < res.size(); i++)
        {
            cout << res[i] - res[i - 1] << " ";
        }
    }
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