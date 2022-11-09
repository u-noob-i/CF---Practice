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
        int count=0;
        while(n>1)
        {
            int k=1;
            for(;(3*k*k)+k<=2*n;k++);
            k--;
            n-=(((3*k*(k+1))/2)-k);
            count++;
        }
        cout<<count<<endl;
    }
}