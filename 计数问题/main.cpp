#include<iostream>
using namespace std;
int main()
{
	int n, x, count = 0;
	cin >> n >> x;
	int *arry = new int[n];
	for (int i = 1; i <= n; i++)
		arry[i - 1] = i;
	for (int i = 0; i < n; i++)
		for (int j = 0; arry[i] != 0; j++)
		{
			int a = 0;
			a = arry[i] % 10;
			if (a == x)
				count++;
			arry[i] /= 10;
		}
	cout << count << endl;
	system("pause");
	return 0;
}