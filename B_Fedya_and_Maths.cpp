#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=s[s.length()-1]-'0';
    if(n%2)
    {
        cout<<0<<"\n";
        return 0;
    }
    if(s=="0")
    {
        cout<<4<<"\n";
        return 0;
    }
    if(n%4==0&&s.length()==1)
    {
        cout<<4<<"\n";
        return 0;
    }
    if(s.length()>1)
    {
        int x=s[s.length()-2]-'0';
        x*=10;
        x+=n;
        if(x%4==0)
        {
            cout<<4<<"\n";
            return 0;
        }
    }
    cout<<0<<"\n";
}