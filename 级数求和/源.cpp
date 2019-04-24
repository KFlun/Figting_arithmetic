#include<iostream>
using namespace std;
int main()
{
	int K;
	long double Sn = 0, n;
	cin >> K;
	for (n = 1; K >= Sn; n++)
		Sn = Sn + 1 / n;
	cout << (int)(n - 1) << endl;
	system("pause");
	return 0;
}