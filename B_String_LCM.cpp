#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0)
        return b; 
    return gcd(b % a, a); 
} 
 
int lcm(int a, int b) 
{ 
    return (a / gcd(a, b)) * b;
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int x=a.length(),y=b.length();
        int n=lcm(x,y);
        int i=n/x,j=n/y;
        string s1=a,s2=b;
        i--;
        j--;
        while(i-->0)
        {
            s1+=a;
        }
        while(j-->0)
        {
            s2+=b;
        }
        if(s1==s2)
        {
            cout<<s1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}