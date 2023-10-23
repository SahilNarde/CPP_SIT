#include <iostream>
using namespace std;
/*
Sorting Algorithm
1. Selection Sort
2. Insertion Sort
3. Bubble Sort
*/

int main()
{
    int n = 7;
    int arr[n] = {23, 11, 35, 9, 62, 51, 45};
    int min_index = 0;
    for (min_index = 0; min_index < n - 1; min_index++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[min_index] < arr[j])
            {
                int temp = arr[min_index];
                arr[min_index] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"array:\n";
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<endl;
    }
}