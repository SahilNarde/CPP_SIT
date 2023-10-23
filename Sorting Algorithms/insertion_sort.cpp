#include <iostream>
using namespace std;
/*
Insertion sort
*/

int main()
{
    int n = 7;
    int arr[n] = {23, 11, 35, 9, 62, 51, 45};
    int key;
    int j;
    for(int i=0;i<n;i++)
    {
        key = arr[i];
        j=i-1;
        while (j>=0 and arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;        
    }
    cout << "array:\n";
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << endl;
    }
}