#include <iostream>
#include <string>

using namespace std;
int add(int x, int y);

int main(void)
{
	int num;
	int x;
	int y;
	int sum;
	cin >> num;

	for (int i = 0; i < 5; i++)
	{
		cin >> x >> y;
		cout << "Case #" << i+1<< ": "<< add(x, y) << endl;
	}
	return 0;
}

int add(int x, int y)
{
	return x + y;
}
