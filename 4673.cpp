#include <iostream>
#include <vector>
using namespace std;

int selfnum(int num)
{
	
	int count = 1;
	int save1 = num;
	int save2 = num;
	int result = 0;
	while (true)
	{
		save1 = save1 / 10;
		if (save1 == 0)
		{
			break;
		}
		count++;
	}

	int* array = new int[count];
	for(int i = 0; i < count; i++)
	{
		
		array[i] = save2 % 10;
		save2 = save2 / 10;
		result += array[i];
	} 
	return (result + num);
}
int main(void)
{
	int size;
	vector<int> v;
	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i+1);
	}
	for (int i = 0; i < 10000; i++)
	{
		int k = 0;
		int num = selfnum(i+1);
		for (int j = 0; j < v.size(); j++)
		{
			if (v[j] == num)
			{
				k = j;
				v.erase(v.begin() + k);
				break;
			}
			
		}
	}
	size = v.size();
	for (int i = 0; i < size ; i++)
	{
		cout << v[i] << endl;
	}
	
	return 0;
	
}
