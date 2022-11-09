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
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    long long ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=b[i]&&a[i+1]!=b[i+1]&&a[i]==b[i+1]&&a[i+1]==b[i])
        {
            swap(a[i],a[i+1]);
            ans++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            ans++;
            a[i]=b[i];
        }
    }
    cout<<ans<<"\n";
}