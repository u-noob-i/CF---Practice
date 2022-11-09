#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s[9];
        for(int i=0;i<9;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(s[i][j]=='1')
                {
                    cout<<2;
                }
                else 
                {
                    cout<<s[i][j];
                }
            }
            cout<<endl;
        }
    }
}