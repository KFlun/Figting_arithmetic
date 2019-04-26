#include<iostream>
using namespace std;

class Subway
{
public:
	int begin;
	int over;
};

int main()
{
	int L, M, count = 0;
	cin >> L >> M;

	Subway *subway = new Subway[M];
	for (int i = 0; i < M; i++)
		cin >> subway[i].begin >> subway[i].over;

	int *Long = new int[L + 1];
	for (int i = 0; i <= L; i++)
		Long[i] = i;

	for (int i = 0; i < M; i++)
		for (int j = 0; j <= L; j++)
			if (Long[j] != 0 && Long[j] >= subway[i].begin && Long[j] <= subway[i].over)
				Long[j] = 0;

	for (int i = 0; i <= L; i++)
		if (Long[i] == i)
			count++;

	for (int i = 0; i < M; i++)
		if (subway[i].begin == 0)
			count--;

	cout << count << endl;
	system("pause");
	return 0;
}