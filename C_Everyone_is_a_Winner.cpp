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

int n, m, i, j;
string s;

long long modu = 1000000007;

void solve(int T)
{
    cin >> n;
    set<int> a;
    a.insert(0);
    a.insert(1);
    i = n - 1;
    while (i >= 1)
    {
        j = n / i;
        a.insert(j);
        i = n / (j + 1);
    }
    cout << a.size() << "\n";
    for (auto itr = a.begin(); itr != a.end(); itr++)
        cout << *itr << " ";
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

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