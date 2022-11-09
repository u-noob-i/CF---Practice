#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	string arr;
	cin >> arr;
	int n = arr.length();
	for (int i = 0; i < n; i++)
	{
		char c = arr[i];
		if (isupper(c))
			arr[i] = tolower(c);	
	}
	for (int j = 0; j < n; j++)
	{
		if (arr[j] != 'a' && arr[j] != 'e' && arr[j] != 'i' && arr[j] != 'o' && arr[j] != 'u' && arr[j] != 'y' )
		{
			cout << "." << arr[j];
		}
	}
}
	