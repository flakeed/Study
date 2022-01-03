#include <iostream>
#include <cmath>
using namespace std;
double func(double& c, double& a, double k , double x) {
	c = atan(fabs(x));
	a = c + pow(k, 2);
	return (pow(sin(a), 3) + (pow(cos(x), 2)));
}
int main()
{
	setlocale(LC_ALL, "russian");
	double k, x, c, a, y;
	cout << "Введите k: " << endl;
	cin >> k;
		cout << "Введите x: " << endl;
	cin >> x;
	y = func(c, a, k, x);
		cout << "Результаты: " << endl;
	cout << "y = " << y << endl;
	cout << "a = " << a << endl;
	cout << "c = " << c << endl;
	return 0;
}