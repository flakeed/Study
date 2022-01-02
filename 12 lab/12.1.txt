#include <iostream>

using namespace std;
int main(){
    int arr[5][5];
    int s = 0;
    int k = 1;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            arr[i][j] = rand() % 15;
            if (i == j) s = s + arr[i][j];
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    int j = 5 - 1;
    int min = arr[0][j];
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i][j])
        {
            min = arr[i][j];
            k++;
        }
        j--;
    }
    cout << "min is: " << min << "num is: " << k;
    return 0;
}
