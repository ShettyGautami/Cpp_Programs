#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    int i = 0, j = 0;
    for(i = 1; i < size; i++)
    {
        int temp = arr[i];
        for(j = i - 1; j >= 0 && temp < arr[j]; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}

void dispData(int arr[], int size)
{
    cout << endl;
    for(int i = 0; i < size; i++)
    {
        cout << " "<< arr[i];
    }
}

int main()
{
    int arr[] = {3, 76, 34, 84, 57, 95, 86, 2, 53, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout <<endl << "Before sorting array : ";
    dispData(arr, size);
    
    selectionSort(arr, size);
    
    cout << endl << "After sorting array : ";
    dispData(arr, size);
    return 0;
}