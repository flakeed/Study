#include <iostream>
using namespace std;

int int_pow(int a, int x)
{
	int result = 1;
	for (int pow_a = a; x != 0; x >>= 1, pow_a *= pow_a)
		if ((x & 1) != 0)
			result *= pow_a;
	return result;
}

int main()
{
	setlocale(0, ".1251");
	cout <<"Число в обычной степени:\n"<< int_pow(2, 8) << "\nЧисло в обратной степени: \n" << int_pow(8, 2);
	return 0;
	
	}