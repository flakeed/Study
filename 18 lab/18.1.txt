#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, ".1251");
    char str[] = "Hello world. Пивет мир This is me. 89 23sf.";
    bool inword = false;
    int c(0);
    for (int i(0); str[i]; i++) {
        if (inword == false && isalpha((unsigned char)str[i]) && (i == 0 || (unsigned char)str[i - 1] == ' ')
            && (((unsigned char)str[i] >= 'a' && (unsigned char)str[i] <= 'z') || ((unsigned char)str[i] >= 'A' && (unsigned char)str[i] <= 'Z'))) {
            c++;
            inword = true;
        }
        if (!isalpha((unsigned char)str[i])) inword = false;
    }
    cout << str << endl;
    cout <<"count words is:" << c << endl;
    system("pause > nul");
    return 0;
}