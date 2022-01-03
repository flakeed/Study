#include <iostream>

using namespace std;
int main()
{
	setlocale(0, ".1251");
	double x, y;
	cout << "Введите х: ";
	cin >> x;
	const double a=0.1, b = 3.25, z = pow(cos(x), 2);
	if (x < log(a))y = a * pow(sin(x), 2) * x + cos(z*x);
	if (log(a) <= x, x <= b) y = pow(cos(x), 3) * (a + z * x);
	if (x > b) y = (sqrt(2.5 * (pow(a, 3))) + pow(b - z * (pow(x, 2)), 6));
			cout << y<<endl;
	system("pause>>void");
	return 0;
}