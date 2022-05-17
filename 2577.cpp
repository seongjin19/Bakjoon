#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c;
	int result;
	int k = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	result = (a * b) * c;
	int save = result;
	while (true)
	{
		
		save = save / 10;
		k = k+1;
		if (save == 0)
		{
			break;
		}
	}

	int* arr = new int[k];

	for (int i = 0; i < k; i++)
	{
		arr[i] = result % 10;
		result = result / 10;
	}
	for (int i = 0; i < 10; i++)
	{
		int count = 0;
		for (int j = 0; j < k; j++)
		{
			if (i == arr[j])
			{
				count++;
			}
			
		}
		cout << count << endl;
	}
	return 0;
}