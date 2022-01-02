#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	setlocale(0, ".1251");
	int t, k,x;
	const double PI = 3.1415;
	cin >> k ;
	if (k = 1) t = (sqrt(abs(pow(2, x) - (pow(x, 2))) + 0.5));
	if (k = 2) t = 1 + atan(x);
	if (k = 3) t = pow(pow(PI, 2) + pow(x, 2),1.0/ 5);
	if (k = 4) t = log(fabs(6.5 - pow(x, 4)));
	cout << t;
	return 0;
}



#include <iostream>
#include "math.h"
using namespace std;
int
main ()
{
  setlocale (0, ".1251");
  int t, k=1, x;

  const double PI = 3.14;

  cin >> x;
M1:
  switch (k)
    {
    case 1:
      {	t = (sqrt (abs (pow (2, x) - (pow (x, 2))) + 0.5));break;  }

    case 2:
      {t = 1 + atan (x);break;   }

    case 3:
      {t = pow (pow (PI, 2) + pow (x, 2), 1.0 / 5);break;  }

    case 4:
      {t = log (fabs (6.5 - pow (x, 4)));break; }
    }
cout << "t" <<k <<"="<<t<< endl;
  k++;
  
  if (k <= 4)
    {
      goto M1;
    }



  return 0;
}