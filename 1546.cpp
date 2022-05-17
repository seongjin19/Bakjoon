#include <iostream>

using namespace std;

int main(void)
{
	double num;
	double max = 0;
	double sum = 0;
	double a;
	cin >> num;
	double* arr = new double[num];
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < num; i++)
	{
		if (max <= arr[i])
		{
			max = arr[i];
		}
	}
	for (int i = 0; i < num; i++)
	{
		arr[i] = (arr[i]/max)*100;
	}
	for (int i = 0; i < num; i++)
	{
		sum += arr[i];
	}
	a = sum / (double)num;
	cout << a;
	return 0;
}