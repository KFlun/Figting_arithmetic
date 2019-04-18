#include<iostream>
using namespace std;
void judge(int a, int b[]);

int main()
{		
	int holenum[9];
	for (int i = 123; i <= 333; i++)
	{
		int i_2 = i * 2;
		int i_3 = i * 3;
		for (int j = 0; j < 9; j++)
			holenum[j] = 0;
		judge(i, holenum);
		judge(i_2, holenum);
		judge(i_3, holenum);
		if (holenum[0] == 1 && holenum[1] == 1 && holenum[2] == 1 && holenum[3] == 1 && holenum[4] == 1 && holenum[5] == 1 && holenum[6] && holenum[7] && holenum[8])
			cout << i << " " << i_2 << " " << i_3<<endl;
		
	}
	system("pause");
	return 0;
}

void judge(int a,int b[])
{
	int sd = a % 10;
	int dc = (a / 10) % 10;
	int hd = a / 100;
	b[sd - 1] = b[dc - 1] = b[hd - 1] = 1;
}

//创建一个计数的数组，数组的每一位对应1——9的一个数，判断是否九个数字都用到时，就只
//需要判断数组的每一位是否都进行过处理