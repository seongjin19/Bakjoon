#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int num;
	cin >> num;

	int x;
	int y;
	int sum;
	for (int i = 0; i < num; i++)
	{
		cin >> x >> y;
		sum = x + y;
		cout << "Case #" << i + 1 << ": " << x << " " << "+" << " " << y << " " << " = " << " " << sum << endl;

	}
	return 0;
}