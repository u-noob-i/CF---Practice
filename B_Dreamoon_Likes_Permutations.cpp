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
    vector<int> arr(n);
    vector<int> count(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        count[arr[i]]++;
    }
    int i = 1, j = -1;
    while (i < n && count[i] == 2)
    {
        i++;
    }
    /*if (i == n)
    {
        vector<int> temp1, temp2;
        for (int ind = 0; ind < n; ind++)
        {
            if (ind < n / 2)
            {
                temp1.push_back(arr[ind]);
            }
            else
            {
                temp2.push_back(arr[ind]);
            }
        }
        sort(temp1.begin(), temp1.end());
        sort(temp2.begin(), temp2.end());
        if (temp1[n - 1] == n - 1 && temp2[n - 1] == n - 1)
        {
            cout << 1 << "\n"
                 << n - 1 << " " << n - 1;
        }
        else
        {
            cout << 0;
        }
        return;
    }*/
    i--;
    if (i == 0)
    {
        cout << 0;
        return;
    }
    vector<int> temp1, temp2;
    for (int ind = 0; ind < n; ind++)
    {
        if (ind < i)
        {
            temp1.push_back(arr[ind]);
        }
        else
        {
            temp2.push_back(arr[ind]);
        }
    }
    int t = 0;
    bool c1 = 1, c2 = 1;
    vector<int> ans;
    sort(temp1.begin(), temp1.end());
    sort(temp2.begin(), temp2.end());
    for (int ind = 0; ind < i; ind++)
    {
        if (temp1[ind] != ind + 1)
        {
            c1 = 0;
            break;
        }
    }
    for (int ind = 0; ind < n - i; ind++)
    {
        if (temp2[ind] != ind + 1)
        {
            c1 = 0;
            break;
        }
    }
    if (c1)
    {
        t++;
        ans.push_back(i);
        ans.push_back(n - i);
    }
    temp1.clear();
    temp2.clear();
    for (int ind = 0; ind < n; ind++)
    {
        if (ind <= n - i - 1)
        {
            temp1.push_back(arr[ind]);
        }
        else
        {
            temp2.push_back(arr[ind]);
        }
    }
    sort(temp1.begin(), temp1.end());
    sort(temp2.begin(), temp2.end());
    for (int ind = 0; ind < n - i; ind++)
    {
        if (temp1[ind] != ind + 1)
        {
            c2 = 0;
            break;
        }
    }
    for (int ind = 0; ind < i; ind++)
    {
        if (temp2[ind] != ind + 1)
        {
            c2 = 0;
            break;
        }
    }
    if (c2 && (!(c1 && i == n - i)))
    {
        t++;
        ans.push_back(n - i);
        ans.push_back(i);
    }
    cout << t;
    for (i = 0; i < ans.size(); i += 2)
    {
        cout << "\n"
             << ans[i] << " " << ans[i + 1];
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