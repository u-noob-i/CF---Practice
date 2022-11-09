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
    string s;
    cin >> s;

    cout << 4 << "\n";

    int n = s.length();
    string a = s.substr(1, n - 2);
    cout << "L " << n - 1 << "\n";

    reverse(a.begin(), a.end());
    s = a + s;

    // cout << s << "\n";

    n = s.length();
    a = s[n - 2];
    cout << "R " << n - 1 << "\n";
    s = s + a;
    // cout << s << "\n";

    n = s.length();
    a = s.substr(1, n - 2);
    cout << "L " << n - 1 << "\n";
    reverse(a.begin(), a.end());
    s = a + s;
    // cout << s << "\n";

    a = s[1];
    s = a + s;
    // cout << s << "\n";
    cout << "L " << 2;
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