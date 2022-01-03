#include <iostream>
#include <utility>

using namespace std;
pair<int, int> func(float arr[17]) {
    double sum = 0, arif = 1;
    int k = 0;
    int max = -1000000000, min = 1000000000;
    for (int i = 1; i < 17; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        for (int i = 0; i < 17; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
    }
    cout << "\nmax is: " << max << "\nmin is: " << min;
    return pair{ min, max };
;
}

int main() {
    float arr[17];
    double arif = 1;
    float sum = 0.0;
    int max = 1, min = 1;
    for (int i = 0; i < 17; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    arif = sum / 17;

    cout << "\nsum is: " << sum;
    cout << "\narif is:" << arif;
    pair min_and_max = func(arr);
    for (int i = 0; i < 17; i++) {
        if (arr[i] == min_and_max.first || arr[i] == min_and_max.second)
            arr[i] = arif;
    }
    for (int j = 0; j < 17; j++) {
        cout << "\narr[" << j << "]= " << arr[j] << "\n";
    }
    return 0;
}
