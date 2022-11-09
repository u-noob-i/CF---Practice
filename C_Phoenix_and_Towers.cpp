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

int n, m, x, y, i, j;
char c;
string s;

void solve(int T)
{
    cin >> n >> m >> x;
    set<pair<int, int>> arr;
    for (i = 0; i < m; i++)
    {
        arr.insert({0, i + 1});
    }
    cout << "YES\n";
    for (i = 0; i < n; i++)
    {
        cin >> y;
        auto itr = arr.begin();
        pair<int, int> p = *itr;
        arr.erase(itr);
        cout << p.second << " ";
        arr.insert({p.first + y, p.second});
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