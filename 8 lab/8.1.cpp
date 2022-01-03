	double f, x, y, s = 0;
	int k = 0, i;
	cout << "Введiть значення x = ";
	cin >> x;
	if (-2 < x && x < 2)
	{
		cout << "\nРезультати:\n";
		do {
			k++;
			for (i = 1, f = 1; i <= (k + 2)*k; i++) f *= i;
			y = (pow(-1, k - 1) * pow(x, 3 * k-1)) / f;
			s += y;
		} while (fabs(y) >= pow(10, -4));
		cout << "Сума: " << s << endl;
		cout << "Кількість доданків: " << k;
	}
	else { cout << "Введено неправильне значення x"; }