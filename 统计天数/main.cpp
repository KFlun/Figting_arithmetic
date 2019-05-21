#include<iostream>
using namespace std;
int judgement(int size, long long int temp[]);
int main()
{
	int day;
	cin >> day;
	long long int *temp = new long long int[day];
	for (int i = 0; i < day; i++)
		cin >> temp[i];
	cout << judgement(day, temp) << endl;
	system("pause");
	return 0;
}
int judgement(int size,long long int temp[])
{
	int highest = 0, count = 1, highest_1 = temp[0];
	for (int i = 1; i < size; i++)
	{
		if (highest_1 < temp[i])
		{
			highest_1 = temp[i];
			count++;
			if (count > highest)
				highest = count;
		}
		else
		{
			count = 1;
			highest_1 = temp[i];
		}	
	}
	return highest;
}