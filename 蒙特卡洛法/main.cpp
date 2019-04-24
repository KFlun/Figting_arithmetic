#include<iostream>
#include<math.h>
using namespace std;

class N
{
public:
	int x, y;
};
double judge(double a, double b, int n, N num[]);
void divided(long double *a, long double *b);
void compare(double A[], double B[], long double *a, long double *b);
int main()
{
	int n;
	double count, a, b;
	long double area;
	cin >> a >> b >> n;
	if (a >= 1 && a <= pow(10, 4) && b >= 1 && b <= pow(10, 4) && n > 0 && n <= pow(10, 5))
	{
		N *num = new N[n];
		for (int i = 0; i < n; i++)
		{
			cin >> num[i].x >> num[i].y;
			if (num[i].x < 0)
				num[i].x = -num[i].x;
			if (num[i].y < 0)
				num[i].y = -num[i].y;
		}
		count = judge(a, b, n, num);

		long double numerator_1 = count;//count 99999
		long double numerator_2 = 2 * a;
		long double numerator_3 = 2 * b;
		long double denominator = n;//n 100000
		divided(&numerator_1, &denominator);
		divided(&numerator_2, &denominator);
		divided(&numerator_3, &denominator);
		long double numerator = numerator_1 * numerator_2*numerator_3;
		if (denominator != 1)
		{
			int size = 1;
			for (int i = 0;; i++)
			{
				static long long int Numerator = numerator;
				Numerator /= 10;
				if (Numerator != 0)
					size++;
				else
					break;
			}
			int *bignum = new int[size];
			for (int i = size - 1; i >= 0; i--)
			{
				bignum[i] = (long long int)numerator % 10;
				numerator = (long long int)numerator / 10;//¥Ê“…£°
			}
			for (int i = 0; i < size; i++)
				cout << bignum[i];
			cout << "/" << denominator << endl;
		}
		else
			cout << (int)numerator << endl;
	}
	system("pause");
	return 0;
}
double judge(double a, double b, int n, N num[])
{
	double judgement;
	double count = 0;
	for (int i = 0; i < n; i++)
	{
		judgement = pow(num[i].x, 2) / pow(a, 2) + pow(num[i].y, 2) / pow(b, 2);
		if (judgement <= 1)
			count++;
	}
	return count;
}
void divided(long double *a, long double *b)
{
	double A[9], B[9];
	for (int i = 0; i < 9; i++)
	{
		A[i] = 0;
		B[i] = 0;
	}
	double n = 1;
	for (int i = 0; i < 9; i++)
	{
		if ((*a / n) == (int)(*a / n))
			A[i] = n;
		else
			A[i] = 0;
		n++;
	}
	double m = 1;
	for (int i = 0; i < 9; i++)
	{
		if ((*b / m) == (int)(*b / m))
			B[i] = m;
		else
			B[i] = 0;
		m++;
	}
	compare(A, B, a, b);
}
void compare(double A[], double B[], long double *a, long double *b)
{
	double n = 1;
	for (int i = 0; i < 9; i++)
	{
		if ((*a / n) == (int)(*a / n))
			A[i] = n;
		else
			A[i] = 0;
		n++;
	}
	double m = 1;
	for (int i = 0; i < 9; i++)
	{
		if ((*b / m) == (int)(*b / m))
			B[i] = m;
		else
			B[i] = 0;
		m++;
	}
	for (int i = 0; i < 9; i++)
	{
		if (A[i] == B[i] && A[i] != 0 && B[i] != 0 && A[i] != 1 && B[i] != 1)
		{
			*a = *a / A[i];
			*b = *b / B[i];
			compare(A, B, a, b);
		}
	}
}