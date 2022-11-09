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
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int i=n-1;
        while(i>0&&arr[i]<=arr[i-1])
        {
            i--;
        }
        while(i>0&&arr[i]>=arr[i-1])
        {
            i--;
        }
        cout<<i<<endl;
    }
}