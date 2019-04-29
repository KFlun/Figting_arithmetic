#include<iostream>
using namespace std;
int main()
{
	long long int arry[100];
	int i = 0;
	for (; i < 100; i++)
	{
		cin >> arry[i];
		if (arry[i] == 0)
			break;
	}	
	for (int n = i - 1; n >= 0; n--)
		cout << arry[n] << " ";
	cout << endl;
	system("pause");
	return 0;
}