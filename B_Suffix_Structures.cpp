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

bool isSubSequence(string str1, string str2, int m, int n)
{

    if (m == 0)
        return true;
    if (n == 0)
        return false;

    if (str1[m - 1] == str2[n - 1])
        return isSubSequence(str1, str2, m - 1, n - 1);

    return isSubSequence(str1, str2, m, n - 1);
}

void solve(int T)
{
    string a, b;
    cin >> a >> b;
    vector<int> arr(26, 0), brr(26, 0);
    if (a.length() < b.length())
    {
        cout << "need tree";
        return;
    }
    for (int i = 0; i < a.length(); i++)
    {
        arr[a[i] - 'a']++;
    }
    for (int i = 0; i < b.length(); i++)
    {
        brr[b[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] < brr[i])
        {
            cout << "need tree";
            return;
        }
    }
    if (isSubSequence(b, a, b.length(), a.length()))
    {
        cout << "automaton";
        return;
    }
    int i = 0;
    for (i = 0; i < 26; i++)
    {
        if (arr[i] > brr[i])
        {
            break;
        }
    }
    if (i == 26)
    {
        cout << "array";
        return;
    }
    cout << "both";
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