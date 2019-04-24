#include<iostream>
#include<math.h>
using namespace std;

long long int count(int num);
long long int choose(int total, int choo);
void compare_ch(double tt[], double ch[], int choo);
void compare_tt(double tt[], double ch[], int choo);

int main()
{
	int num;
	cin >> num;
	if (num <= pow(10, 5))
	{
		long long int fruit = count(num - 1);//去掉一个果矩水果
		int size = 1;
		for (int i = 0;; i++)
		{
			static long long int Fruit = fruit;
			Fruit /= 10;
			if (Fruit != 0)
				size++;
			else
				break;
		}
		int *n = new int[size];
		for (int i = size - 1; i >= 0; i--)
		{
			n[i] = fruit % 10;
			fruit = fruit / 10;//存疑！
		}
		for (int i = 0; i < size; i++)
			cout << n[i];
	}
	else
		return 0;
	system("pause");
	return 0;
}

long long int count(int num)
{
	long long int ct = 0;

	if (num % 2 == 0)
	{
		for (int i = 1; i < num / 2; i++)
			ct += choose(num, i);
		ct = ct % 998244353;
		ct = ((2 * ct) % 998244353 + (choose(num, num / 2)) % 998244353 + 1) % 998244353;
	}
	else
	{
		for (int i = 1; i < num / 2 + 1; i++)
			ct += choose(num, i);
		ct = ct % 998244353;
		ct = ((2 * ct) % 998244353 + 1) % 998244353;
	}

	return (ct * (num + 1)) % 998244353;
}

long long int choose(int total, int choo)
{
	int t = total, c = choo;
	double *tt = new double[total];
	double *ch = new double[choo];
	for (int i = 0; i < choo; i++)
		tt[i] = t--;
	for (int i = 0; i < choo; i++)
		ch[i] = c--;
	compare_tt(tt, ch, choo);
	compare_ch(tt, ch, choo);
	long long int t_t = 1, c_h = 1;
	for (int i = 0; i < choo; i++)
		t_t *= tt[i];
	for (int i = 0; i < choo; i++)
		c_h *= ch[i];
	return (t_t / c_h) % 998244353;
}

void compare_tt(double tt[], double ch[], int choo)
{
	for (int i = 0; i < choo; i++)
	{
		if (tt[i] != 1)
		{
			for (int j = 0; j < choo; j++)
				if ((tt[i] / ch[j]) == (int)(tt[i] / ch[j]) && ch[j] != 1)
				{
					tt[i] = tt[i] / ch[j];
					ch[j] = 1;
				}
		}
	}

}

void compare_ch(double tt[], double ch[], int choo)
{
	for (int i = 0; i < choo; i++)
		if (ch[i] != 1)
		{
			for (int j = 0; j < choo; j++)
				if ((ch[i] / tt[j]) == (int)(ch[i] / tt[j]) && tt[j] != 1)
				{
					ch[i] = ch[i] / tt[j];
					tt[j] = 1;
					compare_ch(tt, ch, choo);
				}
		}
}