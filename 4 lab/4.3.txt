#include <iostream>
using namespace std;
int main()
{
	double a, b;
	cin >> a >> b;
	if (a > 0 && b > 0 || a < 0 && b < 0) cout << 0 <<" " << 0 << endl;
	else cout <<-a <<" " << -b;
		return 0;
}