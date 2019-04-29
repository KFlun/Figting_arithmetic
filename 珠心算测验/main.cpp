#include<iostream>
using namespace std;
int judgement(int size, int arry[]);
int main()
{
	int number;
	cin >> number;
	int *arry = new int[number];
	for (int i = 0; i < number; i++)
		cin >> arry[i];
	cout << judgement(number, arry) << endl;
	system("pause");
	return 0;
}
int judgement(int size, int arry[])
{
	int *arry_1 = new int[size];
	for (int n = 0; n < size; n++)
		arry_1[n] = arry[n];
	int count = 0;
	for (int i = 0; i < size; i++)
		for (int j = i + 1; j < size; j++)
		{
			int num = arry[i] + arry[j];
			for (int k = 0; k < size; k++)
			{
				if (arry_1[k] != 0 && num == arry_1[k] && arry[i] != num && arry[j] != num)
				{
					arry_1[k] = 0;
					count++;
				}
			}
				
		}
	return count;
}