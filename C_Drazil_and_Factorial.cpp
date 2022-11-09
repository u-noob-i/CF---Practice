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
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> arr;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1'||s[i]=='0') continue;
        if(s[i]=='4')
        {
            arr.push_back('3');
            arr.push_back('2');
            arr.push_back('2');
            continue;
        }
        if(s[i]=='6')
        {
            arr.push_back('5');
            arr.push_back('3');
            continue;
        }
        if(s[i]=='8')
        {
            arr.push_back('7');
            arr.push_back('2');
            arr.push_back('2');
            arr.push_back('2');
            continue;
        }
        if(s[i]=='9')
        {
            arr.push_back('7');
            arr.push_back('2');
            arr.push_back('3');
            arr.push_back('3');
            continue;
        }
        else
        {
            arr.push_back(s[i]);
            continue;
        }
    }
    sort(arr.begin(),arr.end());
    for(int i=arr.size()-1;i>=0;i--)cout<<arr[i];
    cout<<"\n";
}