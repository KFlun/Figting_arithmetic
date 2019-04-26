#include<iostream>
using namespace std;
int main()
{
	int hight[10], taotaoh, count = 0;
	for (int i = 0; i < 10; i++)
		cin >> hight[i];
	cin >> taotaoh;
	for (int i = 0; i < 10; i++)
		if (taotaoh + 30 >= hight[i])
			count++;
	cout << count << endl;
	system("pause");
	return 0;
}