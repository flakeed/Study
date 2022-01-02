#define _CRT_SECURE_NO_WARNINGS
#include <string.h> 

#include <iostream> 

using namespace std;

#define N 255  

char s[N];

int main()

{

    setlocale(LC_ALL, "Ru");

    int i, len;

    int  k;

    int num;

    cout << "Введите строку до 20 символов \n";

    scanf("%s", s);

    len = strlen(s);

    printf("Длинна строки [%s]  - [%d] символов \n", s, len);

    for (i = 0, k = 0, num = 0; i < len; i += 1)

    {

        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')

            k += 1;

        if (s[i] >= '0' && s[i] <= '9')

            num += 1;

    }

    if (k != num)



        if (k > num)

            cout << "Количество цифр меньше количества букв!\n";

        else

            cout << "Количество букв меньше количества цифр!\n";

    else

        cout << "Количество букв равно количеству цифр!\n";

    return 0;

}