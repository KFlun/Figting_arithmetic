#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	for (int i = 8; i < 9999999; i++)
	{
		srand(i);
		int X_A1 = rand() % 10; int Y_A1 = rand() % 10;
		int X_B1 = rand() % 10; int Y_B1 = rand() % 10;
		int X_C1 = rand() % 10; int Y_C1 = rand() % 10;
		int X_A2 = rand() % 10; int Y_A2 = rand() % 10;
		int X_B2 = rand() % 10; int Y_B2 = rand() % 10;
		int X_C2 = rand() % 10; int Y_C2 = rand() % 10;
		if (X_A1 != 0 && Y_A1 != 0 && X_B1 != 0 && Y_B1 != 0 && X_C1 != 0 && Y_C1 != 0 && X_A2 != 0 && Y_A2 != 0 && X_B2 != 0 && Y_B2 != 0 && X_C2 != 0 && Y_C2 != 0)
		{
			double long_c1 = sqrt(pow(X_A1 - X_B1, 2) + pow(Y_A1 - Y_B1, 2));
			double long_b1 = sqrt(pow(X_A1 - X_C1, 2) + pow(Y_A1 - Y_C1, 2));
			double long_a1 = sqrt(pow(X_C1 - X_B1, 2) + pow(Y_C1 - Y_B1, 2));
			double cos_B1 = (pow(long_c1, 2) + pow(long_a1, 2) - pow(long_b1, 2)) / (2 * long_c1*long_a1);
			double long_c2 = sqrt(pow(X_A2 - X_B2, 2) + pow(Y_A2 - Y_B2, 2));
			double long_b2 = sqrt(pow(X_A2 - X_C2, 2) + pow(Y_A2 - Y_C2, 2));
			double long_a2 = sqrt(pow(X_B2 - X_C2, 2) + pow(Y_B2 - Y_C2, 2));
			double cos_B2 = (pow(long_c2, 2) + pow(long_a2, 2) - pow(long_b2, 2)) / (2 * long_c2*long_a2);
			while (long_c1 == long_c2 && long_b1 == long_b2 && cos_B1 == cos_B2)
			{
				if (long_a1 != long_a2)
				{
					cout << X_A1 << " " << Y_A1 << endl;
					cout << X_B1 << " " << Y_B1 << endl;
					cout << X_C1 << " " << Y_C1 << endl;
					cout << X_A2 << " " << Y_A2 << endl;
					cout << X_B2 << " " << Y_B2 << endl;
					cout << X_C2 << " " << Y_C2 << endl;
					system("pause");
				}
				else
					break;
			}
		}
	}
	system("pause");
	return 0;
}