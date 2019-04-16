#include<iostream>
using namespace std;
int main()
{
	int monday_s = 0, monday_m = 0, tuesday_s = 0, tuesday_m = 0, wednesday_s = 0, wednesday_m = 0, thursday_s = 0, thursday_m = 0, friday_s = 0, friday_m = 0, saturday_s = 0, saturday_m = 0, sunday_s = 0, sunday_m = 0;
	int monday_t = 0, tuesday_t = 0, wednesday_t = 0, thursday_t = 0, friday_t = 0, saturday_t = 0, sunday_t = 0;

	int day[] = { monday_s, monday_m, tuesday_s, tuesday_m, wednesday_s, wednesday_m, thursday_s, thursday_m,friday_s, friday_m, saturday_s, saturday_m, sunday_s, sunday_m };
	for (int i = 0; i < 14; i += 2)
	{
		cin >> day[i] >> day[i + 1];
		if (day[i] > 10 || day[i + 1] > 10 || day[i] < 0 || day[i + 1] < 0)
			return 0;
	}

	int time[] = { monday_t, tuesday_t, wednesday_t, thursday_t, friday_t, saturday_t, sunday_t };
	for (int i = 0; i < 7; i++)
	{
		static int n = 0;
		time[i] = day[n] + day[n + 1];
		n += 2;
		if (time[i] > 24)
			return 0;
	}

	int num = 0, max = -1;
	for (int i = 0; i < 7; i++)
	{
		if (time[i] > max)
		{
			max = time[i];
			num = i;
		}
	}

	if (max <= 8)
		cout << "0";
	else
		cout << num + 1 << endl;

	system("pause");
	return 0;
}