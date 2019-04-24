#include<iostream>
#include<math.h>
using namespace std;
long long int turn_dcmal(int a[], int b[]);
void turn_binary(long long int a, int b[]);
int main()
{
	long long int dcmal;
	long long int x = pow(2, 32);
	cin >> dcmal;
	if (dcmal < x)
	{
		int a[32], b[32];
		turn_binary(dcmal, a);
		cout << turn_dcmal(a, b);
		cout << endl;
	}
	system("pause");
	return 0;
}

long long int turn_dcmal(int a[], int b[])
{
	for (int i = 31; i >= 0; i--)
	{
		static int num = 0;
		b[num] = a[i];
		num++;
	}
	long long int dcmal = 0;
	for (int i = 31; i >= 0; i--)
	{
		static int num = 0;
		dcmal = dcmal + b[i] * pow(2, num);
		num++;
	}
	return dcmal;
}

void turn_binary(long long int a, int b[])
{
	for (int i = 31; i >= 0; i--)
	{
		b[i] = a % 2;
		a /= 2;
	}
}
