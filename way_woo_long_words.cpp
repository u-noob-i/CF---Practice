#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string* arr = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i].size() > 10)
		{
			int t = arr[i].size();
			char a = arr[i][0];
			char b = arr[i][t - 1];
			cout << a<< t - 2<< b<< endl;
		}	
		else {
			cout << arr[i]<< endl;
		}
	}

}