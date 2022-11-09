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
    string s;
    int z, temp, x = 0, y = 0;
    int zero = 0, one = 0, ans;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        z = 0;
        temp = s.length();
        for (int i = 0; i < temp; i++)
        {
            if (s[i] == '0')
            {
                z++;
            }
        }
        if (temp % 2 == 0 && z % 2)
        {
            x++;
        }
        else if (temp % 2)
        {
            y = 1;
        }
    }
    if (x && !y && x % 2)
    {
        cout << n - 1;
    }
    else
    {
        cout << n;
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