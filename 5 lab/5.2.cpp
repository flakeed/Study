
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	const double PI = 3.14;
	double x, y, z, xMin = -6, xMax = 1, h = 0.2;
	for (x = xMin; x <= xMax; x += h) {
		y = exp(x);
		z = 1.5 * cos(x - PI / 4 * exp(x));
		cout << endl << "x=" << x << " y=" << y <<" z=" << z << endl;
	}
		return 0;

	
}