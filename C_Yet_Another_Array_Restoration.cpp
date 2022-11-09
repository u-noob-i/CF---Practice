#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int i = n - 1;
        if (n == 2)
        {
            cout << x << " " << y << endl;
            continue;
        }
        while (i > 0)
        {
            if ((y - x) % i == 0)
            {
                break;
            }
            i--;
        }
        if (i == 0) i++;
        cout << x << " ";
        n--;
        for (int j = 1; j < i; j++)
        {
            cout << x + (j * (y - x) / i) << " ";
            n--;
        }
        cout << y << " ";
        n--;
        int j = y - x;
        j /= i;
        while (x - j > 0 && n > 0)
        {
            x -= j;
            cout << x << " ";
            n--;
        }
        while (n > 0)
        {
            cout << y + j << " ";
            y += j;
            n--;
        }
        cout << endl;
    }
}