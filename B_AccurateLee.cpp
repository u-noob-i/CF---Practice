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
        int n;
        string s;
        cin>>n>>s;
        int ind=-1;
        int z=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                ind=i;
                while(i<n-1)
                {
                    if(s[i+1]=='0')
                    {
                        z=i+1;
                    }
                    i++;
                }
                if(z==-1)
                {
                    ind==-1;
                }
            }
        }
        if(z==-1)
        {
            cout<<s<<endl;
            continue;
        }
        for(int i=0;i<ind;i++)
        {
            cout<<s[i];
        }
        cout<<0;
        for(int i=z+1;i<n;i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
}