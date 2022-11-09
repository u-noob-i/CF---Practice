#include<iostream>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    while(n > 5*ceil(pow(2,i)))
    {
        n -= 5*ceil(pow(2,i));
        i ++;
    }
    int ans = (n -1)/ceil(pow(2,i));
    if(ans == 0)
        cout << "Sheldon";
    else if(ans == 1)
        cout << "Leonard";
    else if(ans == 2)
        cout << "Penny";
    else if(ans == 3)
        cout << "Rajesh";
    else if(ans == 4)
        cout << "Howard";
   return 0;
}