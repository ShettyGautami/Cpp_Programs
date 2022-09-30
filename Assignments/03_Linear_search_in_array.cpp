#include <iostream>
using namespace std;
int main() {
    int i = 0, j = 0;
    int testCases = 0, size = 0, element = 0;
    int *arr = NULL, *index = NULL;
    
    cout << endl << "Enter number of test cases : ";
    cin >> testCases;
    
    index = (int*) calloc(testCases, sizeof(int));
    
    for(i = 0; i < testCases; i++)
    {
        cout<<endl << "Enter the size of array : ";
        cin >> size;
        
        arr = (int*) calloc(size, sizeof(int));
        
        for(j = 0; j < size; j++)
        {
            cout <<endl <<"Element no " <<j + 1 << ": ";
            cin >> arr[j];
        }
        
        cout << endl << "Enter the element you want to search : ";
        cin >> element;
        
        for(j = 0; j < size; j++)
        {
            if(arr[j] == element)
            {
                index[i] = j;
                break;
            }
            else
            {
                index[i] = -1;
            }
        }
    }
    
    cout << endl <<"Position of required element : ";
    for(i = 0; i < testCases; i++)
    {
        cout << index[i] << " ";
    }

    return 0;
}