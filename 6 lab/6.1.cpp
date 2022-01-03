#include <iostream>
using namespace std;
int main()
{
	const int Max = 14;
	int myMasiv[14]; // заданный массив
	int i;

	cin >> myMasiv[14];
	
	int sum = 0;
	for (int i = 0; i < 14; ++i)
	{
		cin >> myMasiv[i];
		sum = sum + myMasiv[i];
	}
	cout << sum << endl;
	return 0;
}