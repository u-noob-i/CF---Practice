#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    vector<int> ind;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            ind.push_back(i);
    }
    long long val = 1;
    if (ind.empty())
        cout << 0 << endl;
    else
    {
        for (int i = 0; i < ind.size() - 1; i++)
            val *= (ind[i + 1] - ind[i]);
        cout << val << endl;
    }
}