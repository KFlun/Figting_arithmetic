#include<iostream>
using namespace std;
void judgement(int fish, int fish_arry[], int size);
int main()
{
	int number;
	cin >> number;
	int *fish_arry = new int[number];
	for (int i = 0; i < number; i++)
		cin >> fish_arry[i];
	for (int i = 0; i < number; i++)
		judgement(fish_arry[i], fish_arry, i);
	system("pause");
	return 0;
}
void judgement(int fish,int fish_arry[],int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
		if (fish > fish_arry[i])
			count++;
	cout << count<<" ";
}