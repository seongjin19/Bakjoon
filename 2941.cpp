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
		if (num[i] == 'c')
		{
			if (num[i + 1] == '=' || num[i + 1] == '-')
			{
				count++;
				i = i + 1;
			}
			else
			{
				count++;
			}
		}
		else if (num[i] == 'd')
		{
			if (num[i + 1] == 'z')
			{
				if (num[i + 2] == '=')
				{
					count++;
					i = i + 2;
				}
				else
				{
					count++;
				}
			}
			else if (num[i + 1] == '-')
			{
				count++;
				i = i + 1;
			}
			else
			{
				count++;
			}
		}
		else if (num[i] == 'l')
		{
			if (num[i+1] == 'j')
			{
				count++;
				i = i + 1;
			}
			else
			{
				count++;
			}
		}
		else if (num[i] == 'n')
		{
			if (num[i+1] == 'j')
			{
				count++;
				i = i + 1;
			}
			else
			{
				count++;
			}
		}
		else if (num[i] == 's')
		{
			if (num[i + 1] == '=')
			{
				count++;
				i = i + 1;
			}
			else
			{
				count++;
			}
		}
		else if (num[i] == 'z')
		{
			if (num[i + 1] == '=')
			{
				count++;
				i = i + 1;
			}
			else
			{
				count++;
			}
		}
		else
		{
			count++;
		}
	}
	cout << count;
	return 0;
}
