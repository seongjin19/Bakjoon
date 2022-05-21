#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string alpa = "abcdefghijklmnopqrstuvwxyz";
	string s;
	cin >> s;
	int size = s.size();
	
	for (int i = 0; i < 26; i++)
	{	
		int count = 0;
		for (int j = 0; j < size; j++)
		{
			if (alpa[i] == s[j])
			{
				count += 1;
				cout << j <<" ";
				break;
			}
			
		}
		if (count == 0)
		{
			cout << -1 << " " ;
		}
	}
	return 0;
	
}
