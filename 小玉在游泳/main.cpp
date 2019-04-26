#include<iostream>
using namespace std;
int main()
{
	int   steps; double tdistans, xdistans = 0, xdistans_1 = 2;
	cin >> tdistans;
	for (steps = 1; xdistans <= tdistans; steps++)
	{
		xdistans += xdistans_1;
		xdistans_1 = (xdistans_1 / 100) * 98;
	}
	cout << steps - 1 << endl;
	system("pause");
	return 0;
}