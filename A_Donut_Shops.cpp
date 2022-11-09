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
        long long a,b,c;
        cin>>a>>b>>c;
        if(a<c)
        {
            cout<<"1 ";
        }
        else
        {
            cout<<"-1 ";
        }
        if(b*a>c)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}