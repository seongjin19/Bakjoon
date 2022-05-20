#include <iostream>

using namespace std;

int main(void)
{
	int num;
	int sum = 0;
	cin >> num;
	char* a = new char[num];
	cin >> a;
	for (int i = 0; i < num; i++)
	{
		sum += a[i]-'0';
	}

	cout << sum;
}