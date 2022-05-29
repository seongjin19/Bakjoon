#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string num;
	cin >> num;
	int size = num.length();
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (num[i] >= 65 && num[i] <= 67)
		{
			count += 2;
		}
		if (num[i] >= 68 && num[i] <= 70)
		{
			count += 3;
		}
		if (num[i] >= 71 && num[i] <= 73)
		{
			count += 4;
		}
		if (num[i] >= 74 && num[i] <= 76)
		{
			count += 5;
		}
		if (num[i] >= 77 && num[i] <= 79)
		{
			count += 6;
		}
		if (num[i] >= 80 && num[i] <= 83)
		{
			count += 7;
		}
		if (num[i] >= 84 && num[i] <= 86)
		{
			count += 8;
		}
		if (num[i] >= 87 && num[i] <= 90)
		{
			count += 9;
		}
		count++;
	}
	cout << count;;
	return 0;
}
