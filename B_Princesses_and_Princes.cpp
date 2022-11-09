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
        int n;
        cin>>n;
        set<int> arr;
        for(int i=1;i<=n;i++){
            arr.insert(i);
        }
        int last=-1;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            bool done=0;
            while(k--){
                int a;
                cin>>a;
                if(!done&&arr.find(a)!=arr.end()){
                    done=1;
                    arr.erase(a);
                }
            }
            if(!done){
                last=i+1;
            }
        }
        if(arr.size()==0||last==-1){
            cout<<"OPTIMAL\n";
        }
        else{
            cout<<"IMPROVE\n";
            cout<<last<<" "<<*arr.begin()<<"\n";
        }
    }
}