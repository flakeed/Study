#include <iostream>

using namespace std;
int main() {
    int arr[4][6];
    int s = 0;
    int arif = 1;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            arr[i][j] = rand() % 15;
            if (i == j) s = s + arr[i][j];
            cout << arr[i][j] << "\t";
        }
        cout << "\n"<<"\n";
    }
    int sum = 0;
    int k = 1;
    for (int j = 0; j < 6; j++) {
        for (int i = 0; i < 4; i++) {
            sum += arr[i][j];
        }
    }
    arif = sum / 24;
    for (int j = 0; j < 6; j++) {
        for (int i = 0; i < 4; i++) {
            if (arr[i][j] > arif) {
                arr[i][j] = 0;
            }
        }
    }
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 6; i++) {
            cout << "  ";
            cout  << arr[j][i] << "\t";
        }
        cout <<"\t" << "\n"<<"\n";
    }
    
    cout << "arif is: " << arif;

    return 0;
}
