#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
void massive_z(double(&arr)[5][5])
{
    int x = 1;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            arr[i][j] = (1 / tan(3 * i + 2 * j + 5)) + log(i + 2 * j + 2);
    
}

void vector(double arr[5][5], double v[5] = { 0 }) {
    
    for (int i = 0; i < 5; i++) {
        v[i] = pow(arr[i][5  -1 - i], 2);
       
    }
}

void min_max(double arr[5][5],double min=100000000,double max=-100000000) {
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (max < arr[i][j])
                max = arr[i][j];
        }
    }
    cout << "\nmax is:" << max << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (min > arr[i][j])
                min = arr[i][j];
        }
    }
    cout <<"min is:"<< min << endl;
}
int main() {
    double arr[5][5];
    double v[5];
    double min=0, max=0;
    massive_z(arr);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cout  <<"\t" << arr[i][j]<<"   ";
        cout << "\n";
    }
 vector(arr,v);

 for(int i=0;i<5;i++)
 cout << "vector "<<i+1<<" | " << v[i]<<endl;

 min_max(arr, min, max);


   return 0;
   
}