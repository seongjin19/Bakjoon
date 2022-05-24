#include <iostream>

using namespace std;

int onenum(int n)
{
	int count = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int save = n;
	int num;
	if (n < 100)
	{
		return n;
	}
	else
	{
		for (int i = 100; i < n+1; i++)
		{
			c = i % 10;
			b = (i / 10) % 10;
			a = (i / 100);
			num = a - b;
			if ((b - c) == num)
			{
				count++;
			}
		}
	}
	return (count + 99);
}
int main(void)
{
	int num;
	cin >> num;
	cout << onenum(num);

	return 0;
}
