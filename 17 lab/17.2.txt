#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int k, max;
    cout << "Enter a sentence:" << endl;
    getline(cin, str);
    max = k = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (isblank(str[i]))
            k++;
        else
            k = 0;
        if (k > max)
            max = k;
    }
    cout << "Target quantity: " << max << "\n";
    system("pause");
    return 0;
}