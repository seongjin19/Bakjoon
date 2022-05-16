#include <iostream>

using namespace std;

int add(int x, int y);

int main(void)
{
	int x;
	int a, b, c;
	int sum;
	int save;

	int i = 1;
	cin >> x;
	save = x;

	while (true)
	{

		a = x / 10;
		b = x % 10;
		sum = add(a, b);
		c = sum % 10;
		x = (b*10 + c);
		
		if (x == save)
		{
			cout << i;
			break;
		}
		else
		{
			i++;
		}
	}
	return 0;
}
int add(int x, int y)
{
	return x + y;

}