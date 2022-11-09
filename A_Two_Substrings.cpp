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
    cin >> s;
    n = s.length();
    int ab1 = -1, ab2 = -1, ba1 = -1, ba2 = -1;
    for (i = 0; i < n - 1; i++)
        if (ab1 >= 0 && ba1 >= 0)
            break;
        else if (s[i] == 'A' && s[i + 1] == 'B' && ab1 == -1)
            ab1 = i;
        else if (s[i] == 'B' && s[i + 1] == 'A' && ba1 == -1)
            ba1 = i;
    for (i = n - 1; i > 0; i--)
        if (ab2 >= 0 && ba2 >= 0)
            break;
        else if (s[i] == 'A' && s[i - 1] == 'B' && ba2 == -1)
            ba2 = i - 1;
        else if (s[i] == 'B' && s[i - 1] == 'A' && ab2 == -1)
            ab2 = i - 1;
    if (ab1 == -1 || ba1 == -1)
        cout << "NO";
    else if ((ab1 != ba1 - 1 && ba1 != ab1 - 1) || (ab1 != ba2 - 1 && ba2 != ab1 - 1) ||
             (ab2 != ba1 - 1 && ba1 != ab2 - 1) || (ab2 != ba2 - 1 && ba2 != ab2 - 1))
        cout << "YES";
    else
        cout << "NO";
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