#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int hour, min , plus, plush, plusm;
	cin >> hour >> min;
	cin >> plus;
	
	plush = plus / 60;
	plusm = plus % 60;
	hour += plush;
	min += plusm;
	if (min >= 60)
	{
		min -= 60;
		hour++;
	}
	if (hour >= 24)
	{
		hour -= 24;
	}

	cout << hour << " " << min;


	return 0;
}
