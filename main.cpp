#include <iostream>
#include <string.h>

using namespace std;

int main()
{

	string firstS;
	string secondS;
	cin >> firstS;
	cin >> secondS;

	if (firstS[0] == secondS[secondS.length()-1])
	{
		cout << "YES";
		return 1;
	}

	cout << "NO";
	return 0;
}
