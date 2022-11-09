#include<iostream>
#include<string>

using namespace std;

int main()
{
	int sides = 0;
	int n;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;

		if (s == "Tetrahedron")
		{
			sides += 4; 
		}
		else if(s == "Cube")
		{
			sides += 6;
		}
		else if(s == "Octahedron")
		{
			sides += 8;
		}
		else if(s == "Dodecahedron")
		{
			sides += 12;
		}
		else
		{
			sides += 20; 
	    }
	}
	cout << sides << endl;
}