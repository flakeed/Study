#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	struct worker
	{
		char surname[20], position[20], education[20];
		int yearOFbirthday, salary;
	};
int kk = 0,k;
	int year ;
	
	printf("Введіть кількість працівників \n");
	cin >> k;
	printf("Введіть поточний рік \n");
	cin >> year;
	int st[2];
	worker* a = new worker[k];
	
	for (int i = 0; i < k; i++)
	{
		printf("Введіть відомості працівника %i \n", i + 1);
		scanf("%s %s %s %i %i", a[i].surname, a[i].position, a[i].education, &a[i].yearOFbirthday, &a[i].salary);
		
	}
	
	for (int i = 0; i < k; i++)
	{
		cout << a[i].surname << " родился в " << a[i].yearOFbirthday << " году\n" << endl;
	}
	for (int i = 0; i < k; i++) {
		st[i] = year - a[i].yearOFbirthday;
	}
	cout << "\n\nАнкеты заполнены\n\n";
	cout << "Сотрудники моложе 30:\n";
	cout << "\n";
	for (int i = 0; i < k; i++)
	{
		if (st[i] < 30) {
			cout << a[i].surname << " он родился в " << a[i].yearOFbirthday <<" году\n" << endl;
			kk++;
		}
	}
	cout << "Количество сотрудников моложе 30: " << kk << endl;
	cout << "\n\n";
	system("pause");
	return 0;
}
Pastuhov
Менеджер
Высшее
2000
21000

Tulenkov
Директор
Высшее
1960
40000