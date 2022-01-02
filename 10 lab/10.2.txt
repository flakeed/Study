#include <iostream>
using namespace std;
int main()
{
	int k[17];
	int res = 1, r, fr = 1;

	int p, max, imax;
	max = k[0];
	//введем массив
	for (p = 0; p < 18; p++) {
		cin >> k[p];
	}
	int i, j, t;
	//делаем массив по возростанию
	for (int i = 0; i < 17 - 1; i++) {
		for (int j = 0; j < 17 - i - 1; j++) {
			if (k[j] > k[j + 1]) {
				// меняем элементы местами
				t = k[j];
				k[j] = k[j + 1];
				k[j + 1] = t;
			}

		}

	}
	//выведем массив
	for (int i = 0; i < 17; i++) {

		cout << k[i] << " ";
	}
//находим максимальное значение
	for (int m = 1; m < 17; m++)
	{
		if (k[m] > max)
		{
			max = k[m];
			imax = m;
		}
	}
	//вычитаем факториал

	cout << "Максимальный элемент массива: " << max << endl;
	fr *= max;
	for (r = 1; r <= fr; r++)
	{
		res = res * r;
	}
	cout << "factorial is; " << res;

	return 0;
}