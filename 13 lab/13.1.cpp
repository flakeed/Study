
#include <iostream>

using namespace std;
int f(int arr[4][6]) {
    int k = 0;
    int sum = 0;
    for (int j = 0; j < 6; j++) {
        for (int i = 0; i < 4; i++) {
            if (arr[i][j] > 0 && arr[i][j] % 3 == 0)
            {
                sum += arr[i][j];
                k++;
            }
        }
    }
    cout << "num is: " << k<<"\n";
    return sum;
}
int main() {
    int arr[4][6];
    int s = 0;
    int sum = 0, k = 1;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            arr[i][j] = rand() % 5;
            if (i == j) s = s + arr[i][j];
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    sum = f(arr);
    cout << "sum is: " << sum;

    //13.1 Обчислити суму та кількість елементів матриці, кратних 3
    return 0;
}

