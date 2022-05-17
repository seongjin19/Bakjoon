#include <iostream>

using namespace std;

int main(void)
{
	int arr[10];
	int s = 0;
	
	for(int i = 0; i < 10; i++)
	{
		int num = 0;
		cin >> num;
		arr[i] = num % 42;
	}
	for(int i = 0; i < 42; i++)
	{
		int count = 0;
		for (int k = 0; k < 10; k++)
		{
			if (arr[k] == i)
			{
				count++;
			}
		}
		if (count > 0)
			s++;
	}
	cout << s;
	return 0;
}