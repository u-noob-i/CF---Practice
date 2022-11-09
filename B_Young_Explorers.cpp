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
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int count=0,prev=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=i+1-prev)
            {
                count++;
                prev=i+1;
            }
        }
        cout<<count<<endl;
    }
}