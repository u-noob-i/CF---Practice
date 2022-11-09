#include<iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int n = k;
    bool* prime = new bool[10000001];
    for (int i = 0; i < 10000001; i++)
        prime[i] = true;

    for (int p = 2; p < 10000001; p++)
    {
        if (prime[p] == true)
        {
            cout << p << " ";
            n--;
            for (int i = 2; i * p < 10000001; i++)
                prime[i * p] = false;
        }
        if (!n)
            break;
    }
}