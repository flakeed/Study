#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	double s = 0, u, x;
	int i, k, f;
	cout << "Введiть значення x = ";
	cin >> x;
	for (i = 1; i <= 6; i++)
	{
		f = 1;
		for (k = 1; k <= 2 * i - 1; k++) f *= k;
		u = pow(-1,i+1)*pow(x,2*i)/ f;
		s += u;
	}
	cout << "\nСума = " << s;
	return 0;
}