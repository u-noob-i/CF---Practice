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

long long modu = 1000000007;

bool isPalindrome(string S)
{
    for (int i = 0; i < S.length() / 2; i++)
        if (S[i] != S[S.length() - i - 1])
            return 0;
    return 1;
}

void solve(int T)
{
    cin >> s;
    n = s.length();
    i = 0;
    j = n - 1;
    while (i < n / 2 && s[i] == s[j])
    {
        i++;
        j--;
    }
    k = i - 1;
    string ans = "", temp = "";
    for (i = k + 1; i < n - (k + 1); i++)
    {
        temp += s[i];
        if (isPalindrome(temp))
            ans = temp;
    }
    temp = "";
    for (i = n - 1 - (k + 1); i > k; i--)
    {
        temp = s[i] + temp;
        if (isPalindrome(temp) && ans.length() < temp.length())
            ans = temp;
    }
    temp = "";
    for (i = 0; i <= k; i++)
        temp += s[i];
    ans = temp + ans;
    for (i = n - 1 - k; i < n; i++)
        ans += s[i];
    cout << ans;
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