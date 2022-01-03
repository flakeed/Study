#include <iostream>
using namespace std;
int func(int arr[17])
{
    int arif = 1;
    int i, sum = 0;
    int k = 0;
    for (i = 0; i < 17; i++)
    {
        if (arr[i] > arr[16])
        {
            sum += arr[i];
        }
    }

    return sum;
}

int main()
{
    int k=0, i,arif=1;
    int arr[17];
    for (auto i = 0; i < 17; i++)
    {
        cin >> arr[i];
        
        
    }
    for (i = 0; i < 17; i++)
    {
        if (arr[i] > arr[16])
        {
            k++;
        }
    }    
   auto sum = func(arr);
   arif = sum / k;
    cout << "\narif is:  " << arif <<endl;
    return 0;
}