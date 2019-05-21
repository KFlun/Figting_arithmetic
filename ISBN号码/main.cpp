#include<iostream>
using namespace std;
int main()
{
	char num_c[13], num[9];
	int num_t = 0;
	for (int i = 0; i < 13; i++)
		cin >> num_c[i];
	for (int i = 0; i < 11;i++)
	{
		static int n = 0;
		if (num_c[i] != '-')
			num[n++] = num_c[i];
	}
	for (int i = 0; i < 9; i++)
		num_t += (num[i] - '0')*(i + 1);
	if ((num_t % 11 + '0') == num_c[12]|| (num_t % 11 + '0'+30)==num_c[12])
		cout << "Right";
	else
	{
		if (num_t % 11 == 10)
			num_c[12] = 'X';
		else
			num_c[12] = num_t % 11 + '0';
		for (int i = 0; i < 13; i++)
			cout << num_c[i];
	}
	system("pause");
	return 0;
}

