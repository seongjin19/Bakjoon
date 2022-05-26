#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s;
	getline(cin, s);
	int size = s.length();
	
	int count = 1;
	for (int i = 0; i < size; i++)
	{
		if (s[i] == ' ')
		{
			count++;
		}
	}
	if (s[0] == ' ')
	{
		count--;
	}
	if (s[size-1] == ' ')
	{
		count--;
	}
	cout << count;

	return 0;
	
}