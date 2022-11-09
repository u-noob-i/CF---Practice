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
        int n,k;
        string s;
        cin>>n>>k>>s;
        int count=0;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')count++;
            arr[i]=count;
        }
        count=0;
        int i=0;
        if(s[i]=='1')
        {
            i+=k+1;
        }
        for(;i<n;i++)
        {
            if(s[i]=='0'&&arr[min(n-1,i+k)]-arr[i]==0&&arr[i]-arr[max(0,i-k-1)]==0)
            {
                count++;
                i+=k;
            }
            else if(s[i]=='1')
            {
                i+=k;
            }
        }
        cout<<count<<endl;
    }
}