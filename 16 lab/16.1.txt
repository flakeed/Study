
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	int a[10][4], i, j, rowc = 0, k = 0;
	cout << "Ввести матрицу" << endl;
	int r[10] = { 0 };
	int x=-1;
	for (i = 0; i < 10; i++)
		for (j = 0; j < 4; j++)
		{
			a[i][j] = rand() % 122;
			if (a[i][j] % 10 ==0) {
				r[i]++;
				x++;
			}

		}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 4; j++) {
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	for (i = 0; i < 10; i++)
		if (r[i] != a[i][j]) rowc++;
	int** b = new int* [rowc];
	for (i = 0; i < rowc; i++) b[i] = new int[4];
	for (i = 0; i < 10; i++)
		if (r[i] != 0)
		{
			for (j = 0; j < 4; j++) b[k][j] = a[i][j];
			k++;
		}
	cout << "\nНовая матрица:" << endl;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < 4; j++)
			cout << b[i][j] << "\t";
		cout << endl;
	}
	for (int i = 0; i < rowc; i++)
		delete[] b[i];
	delete[]b;
	system("pause");
	return 0;
}