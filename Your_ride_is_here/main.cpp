#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int prdt(string A, string a, int size);
int main()
{
	string letters("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	string gp, pl;
	for (int i = 0; i < 6; i++)
	{
		cin >> pl;
		if (!isspace(pl[i]))
			break;
	}
	for (int i = 0; i < 6; i++)
	{
		cin >> gp;
		if (!isspace(gp[i]))
			break;
	}
	int pl_num = prdt(letters, pl, pl.size()) % 47;
	int gp_num = prdt(letters, gp, gp.size()) % 47;
	if (pl_num == gp_num)
		cout << "GO";
	else
		cout << "STAY";
	system("pause");
	return 0;
}

int prdt(string A, string a, int size)
{
	int pdt = 1;
	for (int n = 0; n < size; n++)
		for (int i = 0; i < 26; i++)
			if (a[n] == A[i])
				pdt *= (i + 1);
	return pdt;
}