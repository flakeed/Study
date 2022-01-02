#include <iostream>
using namespace std;
int main()
{
	int m=1, k, i, j;
	cin >> k;
	for (j = 1; j <= k; j++){
		m *= ((j - 6)*j) / (j - 3);
		cout << m << endl;
	}
	for (i = k; i <= 12; i++) {
		m*=(pow(sqrt(i + 5), 3)) / (i - 11);
		cout << m << endl;
		}

	return 0;
}
