#include <iostream>
using namespace std;
/*
Bubble Sort
*/

int main()
{
    int n = 7;
    int arr[n] = {21, 11, 35, 9, 62, 51, 45};
    bool swapped;
    do
    {
        swapped = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
                swapped = true;
            }
        }
    } while (swapped == true);
    cout << "array:\n";
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << endl;
    }
}