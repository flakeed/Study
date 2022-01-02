#include <iostream>
#include <math.h>
using namespace std;
int func(int b[], int j1)
{
	int sum = 0;
	for (int i = j1; i < 10; ++i) {
		if (b[i] <= 10)
			sum += b[i];
	}

	return sum;
}
int main()
{
	setlocale(LC_CTYPE, "ukr");
	int a[10], i, j = 0, j1;
	for (int i = 0; i < 10; i++)
	{
		cout << "Введіть ціле число: \n";
		cin >> a[i];
	}
	cout << "Маємо масив: \n";
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		if (a[i] == 0)
		{
			j++;
			j1 = i + 1;
			break;
		}
	}


	if (j == 0)
	{
		cout << "0 чисел немає \n";
	}
	else
	{
		int c = 10 - j1;
		int* b = new int[c];
		for (j = 0, i = j1; i < 10; j++, i++)
		{
			b[j] = a[i];
		}
		cout << "Маємо динамічний масив: \n";
		for (j = 0, i = j1; i < 10; j++, i++)
		{
			cout << b[j] << "\t";
		}
		auto sum = func(a, j1);
		cout << "\nsum is:" << sum;
		cout << endl;
		func(a, j1);
	}


	system("pause>>void");
}


