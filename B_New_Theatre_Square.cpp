#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<string> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int sc=0,dc=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(j+1<m&&arr[i][j]=='.'&&arr[i][j+1]=='.')
                {
                    dc++;
                    j++;
                }
                else if(arr[i][j]=='.')
                {
                    sc++;
                }
            }
        }
        cout<<min((sc+(2*dc))*x,(dc*y)+(sc*x))<<endl;
    }
}