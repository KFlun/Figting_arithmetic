#include<iostream>
using namespace std;
int main()
{
	int rank;
	cin >> rank;
	if (rank <= 13)
	{
		int j = 0;
		int rank_1 = rank;
		char arry[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
		for (int i = 0; i < rank; i++)
		{
			for (; j < rank_1; j++)
				cout << arry[j];
			j = j - rank + 1;
			rank_1++;
			cout << endl;
		}
	}
	else
		return 0;
	system("pause");
	return 0;
}