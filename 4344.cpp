#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(void)
{
	
	int test = 0;
	int std;
	cin >> test;
	double avg = 0;
	for (int i = 0; i < test; i++)
	{
		int count = 0;
		int sum = 0;
		double ratio = 0;
		cin >> std;
		int* arr = new int[std];
		for (int j = 0; j < std; j++)
		{
			cin >> arr[j];
			sum += arr[j];
		}
		avg = (double)sum / (double)std;
		for (int k = 0; k < std; k++)
		{
			if (avg < arr[k])
			{
				count++;
			}
		}
		ratio = ((double)count / (double)std) * 100;
		cout << fixed;
		cout.precision(3);
		cout << round(ratio*1000)/1000 << "%" << endl;
	}

	return 0;
}