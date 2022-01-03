#include <iostream>
using namespace std;
int main()
{
	double k = 4, m = -14.7, n = -0.6, y, x;
	cin >> x;
	if (3 * x > (fabs(m + n))) y = log(fabs((log10)(fabs(k * x + m * n))));
	if (3 * x == (fabs(m + n))) y = sin(k * m * x) + sqrt(fabs(n * x));
	if (3 * x < (fabs(m + n))) y = exp(cos(x)) + exp(m + n);
	cout << y << endl;
		return 0;
}




#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double k, m , n , y;
	cin >> k;
	if (k = 4) {
		m = -14.7;
		n = -0.6;
	}
	if (k = 3) {
		m = 6.5;
		n = 3.15;
	}
	if (k = 5) {
		m = -12;
		n = 0.45;
	}
	int x;
	cin >> x;
	M1:
	switch (x)
	{
	case 1: { y = log(fabs((log10)(fabs(k * x + m * n)))); break; }
	case 2: { y = sin(k * m * x) + sqrt(fabs(n * x)); break; }
	case 3: { y = exp(cos(x)) + exp(m + n); break; }
	}

	cout << " y = "<<y<< endl;
	system("pause>>void");
	return 0;
}
