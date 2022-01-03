#include <iostream>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	double x, y;
	cout << "Введите значение х: ";
	cin >> x;
	if (x < -2) y = 4 * (pow(x, 2) + 2 * x);
		if (-2 <= x, x < 3) y = 2 * x - 1;
			if (x >= 3) y = pow(x, 3) + 3;
			cout << y<<endl;
	system("pause>>void");
	return 0;
}