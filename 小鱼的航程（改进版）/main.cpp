#include<iostream>
using namespace std;
int main()
{
	long int day, n, distance = 0;
	cin >> day >> n;
	for (int i = 0; i < n; i++)
	{
		if (day % 6 != 0 && day % 7 != 0)
			distance += 250;
		day = (day+1) % 7;  
	}		
	cout << distance;
	system("pause");
	return 0;
}