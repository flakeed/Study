
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	double x, u, s = 0;
	int i, n;
	cout << "Введiть цiле значення n= ";
	cin >> n;
	cout << "Введiть значення x= ";
	cin >> x;
	cout << "\nРезультати:\n";
	for (i = 1; i <= n; i++)
	{
		u = pow(-1, i) * pow(x, i) / (i);
		cout << "Доданок " << i << " = " << u <<
			endl;
		s += u;
	}
	cout << "Сума = " << s << endl;
	system("pause>>void");
	return 0;
}