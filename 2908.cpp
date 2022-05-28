#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	/*int a, b;
	cin >> a >> b;
	int arr1[3];
	int arr2[3];*/
	int arr[2];
	int test = 0;
	int a[3];
	int b[3];
		

	for (int i = 0; i < 2; i++)
	{
		cin >> arr[i];
	}
	int save1 = arr[0];
	int save2 = arr[1];

	for (int i = 0; i < 3; i++)
	{
		a[i] = save1 % 10;
		save1 = save1 / 10;
	}

	for (int i = 0; i < 3; i++)
	{
		
		b[i] = save2 % 10;
		save2 = save2 / 10;
	}

	int t1 = 0;
	int t2 = 0;
	t1 = a[0];
	a[0] = a[2];
	a[2] = t1;

	t2 = b[0];
	b[0] = b[2];
	b[2] = t2;
	
	arr[0] = a[2] * 100 + a[1] * 10 + a[0];
	arr[1] = b[2] * 100 + b[1] * 10 + b[0];
	if (arr[0] > arr[1])
	{
		cout << arr[0];
	}
	else
	{
		cout << arr[1];
	}
	
	return 0;
}
