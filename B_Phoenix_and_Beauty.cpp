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
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n),freq(101);
        for(int i=0;i<101;i++)
        {
            freq[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;
        }
        int c=0;
        for(int i=0;i<101;i++)
        {
            if(freq[i]>0)c++;
        }
        if(c>k)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<int> ans(k);
        int j=0;
        for(int i=0;i<101;i++)
        {
            if(freq[i]>0)
            ans[j++]=i;;
        }
        if(c<k)
        {
            while(c++<k)
            {
                ans[j++]=1;
            }
        }
        cout<<n*k<<endl;
        while(n--)
        {
            for(int i=0;i<k;i++)
            {
                cout<<ans[i]<<" ";
            }
        }
        cout<<"\n";
    }
}