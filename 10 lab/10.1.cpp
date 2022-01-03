#include <iostream>
using namespace std;
int main()
{
	int k[17];
	double sum = 0, ser;
	int p;
	// заполнение массива
	for (p = 0; p < 18; p++) {
		cin >> k[p];
	}
	int i, j, t;
	//сортировка массива
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
//выводим отсортированный массив
	for (int i = 0; i < 17; i++) {
		cout << k[i] << " ";
	}
	sum = k[0] + k[16];
	ser = sum / 2;
	cout <<"RETURN SER ARIFMET MIN AND MAX; "<< ser;
	return 0;
}
