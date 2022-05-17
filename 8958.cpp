#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	char arr[80] = {};
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int len = 0;
		int count = 0;
		int sum = 0;
		cin >> arr;
		len = strlen(arr);
		for (int j = 0; j < len; j++)
		{
			if (arr[j] == 'O')
			{
				count++;
				sum += count;
			}
			else if (arr[j] == 'X')
			{
				count = 0;
			}
		}
		cout << sum << endl;
	}

}