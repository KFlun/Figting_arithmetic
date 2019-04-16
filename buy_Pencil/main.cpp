#include<iostream>
using namespace std;
int main()
{
	int total;
	int pencil[3];
	int price[3];
	int cost[3];
	cin >> total;
	if (total >= 10000 || total <= 0)
		return 0;
	for (int i = 0; i < 3; i++)
		cin >> pencil[i] >> price[i];
	for (int i = 0; i < 3; i++)
	{
		if (pencil[i] >= 10000 || pencil[i] <= 0)
			return 0;
	}
	for (int i = 0; i < 3; i++)
	{
		if (total%pencil[i] != 0)
			cost[i] = (total / pencil[i] + 1)*price[i];
		else
			cost[i] = (total / pencil[i])*price[i];
	}

	int min = cost[0];
	for (int i = 1; i < 3; i++)
	{
		if (cost[i] < min)
			min = cost[i];
	}

	cout << min;

	system("pause");
	return 0;
}