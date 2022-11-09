#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<bitset<64>> arr(n);
        for (int j = 0; j < n; j++)
        {
            long long x;
            cin >> x;
            bitset<64> temp(x);
            arr[j] = temp;
        }
        long long ans = 0;
        for (int i = 0; i < 63; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[j][i] == 1)
                {
                    count++;
                }
            }
            if (count % 2 == 0)
            {
                continue;
            }
            ans += ((long long)1 << i);
            for (int j = 0; j < n; j++)
            {
                for (int k = i; k < 64; k++)
                {
                    if (arr[j][k] == 0)
                    {
                        arr[j][k] = 1;
                        break;
                    }
                    arr[j][k] = 0;
                }
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i][63] == 1)
            {
                count++;
            }
        }
        if (count % 2)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << ans << "\n";
        }
    }
    return 0;
}
