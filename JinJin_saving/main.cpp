#include<iostream>
using namespace std;
int main()
{
	int January = 0, February = 0, March = 0, April = 0, May = 0, June = 0, July = 0, August = 0, September = 0, October = 0, November = 0, December = 0;
	int salary[10];
	int cost[] = { January, February, March, April, May, June, July, August, September, October, November,December };
	int saving = 0, change = 0;

	for (int i = 0; i < 12; i++)
		salary[i] = 300;
	for (int i = 0; i < 12; i++)
		cin >> cost[i];

	for (int i = 0; i < 12; i++)
	{
		if (cost[i] < 350 && cost[i] >= 0)
		{
			change = change + (salary[i] - cost[i]);
			if (change < 0)
			{
				cout << -(i + 1);
				break;
			}
			else
			{
				while (change >= 100)
				{
					change -= 100;
					saving += 100;
				}
				if (i == 11)
				{
					cout << (saving*0.2) + saving + change;
				}
			}
		}
		else
			return 0;
	}
	system("pause");
	return 0;
}