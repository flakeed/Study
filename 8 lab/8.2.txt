#include "math.h";
#include <iostream>
using namespace std;
int main()
{

	setlocale(LC_CTYPE, "ukr");
	double x, y, s = 0;
	int k = 0, n;
	const double p = 3.14;
	cout << "Оберіть оператор циклу:\n";
	cin >> n;
	cout << "Введіть значення x: ";
	cin >> x;
	switch (n)
	{
	case 1:
	{
		for (k = 1; k <= 12; k++)
		{
			y = (cos(k * x)) / k;
			s += y;
		}
	}
	break;
	case 2:
	{
		k = 1;
		while (k <= 12)
		{
			for (k = 1; k <= 12; k++)
			{
				y = (cos(k * x)) / k;
				s += y;
				k++;
			}
		}
		break;
		case 3:
	{
		k = 1;
		do {
			y = (cos(k * x)) / k;
			s += y;
			k++;
		} while (k <= 12);
	}	
break;
	}	
cout << "\n Результати:\n";
		cout << "Сума: " << s << endl;
		cout << "Кількість доданків: " << k;
	return 0;
}
}