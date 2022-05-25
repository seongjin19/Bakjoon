#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int test;
	
	
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		int num = 0;
		string s;
		cin >> num >> s;
		int u = s.length();
		for (int j = 0; j < u; j++)
		{
			
			for (int k = 0; k < num; k++)
			{
				cout << s[j];
			}
			
		}
		cout << endl;
	}

}
