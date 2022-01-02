#include <iostream>

using namespace std;
int main()
{
	setlocale(0, ".1251");
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
        cout << "Является прямоугольником " << endl;
    else
        cout << "Не является прямоугольником" << endl;
	system("pause>>void");
	return 0;
}