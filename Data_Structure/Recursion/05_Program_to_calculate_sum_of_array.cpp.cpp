#include <iostream>
using namespace std;

void acceptElements(int *arr, int count)
{
    for(int i = 0; i < count; i++)
    {
        //cout << endl << "Element No " << i + 1 << " : " ;
        cin >> arr[i];
    }
}

int sumNum(int arr[], int count)
{
    static int i = -1;
    int sum = 0;
    if(i == count)
    {
        return 0;
    }
    else
    {
        i++;
        sum = arr[i] + sumNum(arr, count);
    }
    return sum;
}

int main()
{
    int arr[100] = {}, count = 0, sum = 0;
    cout << endl << "Enter the count : ";
    cin >> count;
    
    cout << endl << "Enter array elements : ";
    acceptElements(arr, count);
    sum = sumNum(arr, count - 1);
    
    cout << endl << "Sum of array : " << sum;
    
    return 0;
}