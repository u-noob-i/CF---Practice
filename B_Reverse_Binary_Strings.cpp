#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<math.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int z=0,o=0;
        for(int i=0;i<n;i++)
        {
            int l=0;
            if(s[i]=='1')
            {
                while(i<n&&s[i]=='1')
                {
                    l++;
                    i++;
                }
                o+=l-1;
            }
            else{
                while(i<n&&s[i]=='0')
                {
                    l++;
                    i++;
                }
                z+=l-1;
            }
            i--;
        }
        cout<<max(o,z)<<"\n";
    }    
}