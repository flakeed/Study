#include <iostream>

using namespace std;
int main() {
    int arr[4][6];
    double v[6];
    int s = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            arr[i][j] = rand() % 5;
            if (i == j) s = s + arr[i][j];
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    for (int j = 0; j < 6; j++)
    {
        for (int i = 0; i < 4; i++) {
            v[j] = arr[i][j];
            for (int i = 0; i < 4; i++) {
            if (arr[i][j] > 0 && arr[i][j] < v[j]) {
                v[j] = arr[i][j];
                
            }
        }
    }
}
    for(int j=0;j<6;j++)
    {
        cout << "\nvector is: ";
        cout<< v[j] << "\t";
    }
    return 0;
}
