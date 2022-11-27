#include <iostream>
using namespace std;

void displayArray(int input[], int size)
{
    cout << endl;
    for(int i = 0; i < size; i++)
    {
        cout << input[i]<< " "; 
    }
}

int minimum(int input[], int start, int end)
{
    int minIndex = start;
    for(int i = start + 1; i < end; i++)
    {
        if(input[minIndex] > input[i])
        {
            minIndex = i;
        }
    }
    return minIndex;
}

void selectionSort(int input[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        int minIndex = minimum(input, i,size);
        int temp = input[i];
        input[i] =  input[minIndex];
        input[minIndex] = temp;
    }
}
int main() {
    
    int arr[5] = { 1, 7, 2, 87, 35};
    cout << endl << "Before sorting the array : ";
    displayArray(arr, 5);
    selectionSort(arr, 5);
    cout << endl << "After sorting the array : ";
    displayArray(arr, 5);
    
    return 0;
}