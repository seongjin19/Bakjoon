#include <iostream>

using namespace std;

int Max(int n, int* x);
int Min(int n, int* x);

int main(void)
{
	int num;
	cin >> num;
	int* arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}

	cout <<Min(num,arr) << " " << Max(num, arr);

	return 0;

}

int Max(int n, int* x)
{
	int max = -1000000;
	
	for(int i = 0; i < n; i++)
	{
		if (x[i] > max)
			max = x[i];
		else
			continue;

	}
	return max;
}

int Min(int n, int* x)
{
	int min = 1000000;

	for (int i = 0; i < n; i++)
	{
		if (x[i] < min)
			min = x[i];
		else
			continue;

	}
	return min;
}