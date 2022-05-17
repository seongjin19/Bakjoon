#include <iostream>

using namespace std;

int main(void)
{
	int num = 0;
	int max = 0;
	int arr[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 9; i++)
	{
		if (max <= arr[i])
		{
			max = arr[i];
			num = i+1;
		}
	}
	cout << max << endl;
	cout << num;

	return 0;
}