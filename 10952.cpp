#include <iostream>

using namespace std;
int add(int x, int y);

int main(void)
{
	int x;
	int y;


	while (true)
	{
		cin >> x >> y;
		if (x == 0 && y == 0)
		{
			return 0;
		}
		cout << add(x, y) << endl;
	}
}

int add(int x, int y)
{
	return x + y;

}