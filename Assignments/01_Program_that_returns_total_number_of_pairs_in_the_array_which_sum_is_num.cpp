#include <iostream>
using namespace std;

int main() {
    int i = 0, j = 0, k = 0, num = 0, testCases = 0, size;
    int *arr = NULL, *ipairSum = NULL;
    
    cout << endl << "Enter number of test cases : ";
    cin >> testCases;
    
    ipairSum = (int*)calloc(testCases, sizeof(int));
           
    for(i = 0; i < testCases; i++)
    {       
        cout << endl << "For test case "<< i + 1<< ": ";
        cout<<endl<<"Enter size of array : ";
        cin >> size;
        
        arr =  (int*)calloc(size, sizeof(int));
        //loop to accept array elements
        for(j = 0; j < size; j++)
        {
            cout << endl << "Element no " << j + 1<< ": ";
            cin >> arr[j];
        }
        
        cout << endl << "Enter the integer : ";
        cin >> num;
        
        for(j = 0; j < size - 1; j++)
        {
            for(k = j + 1; k < size ;k++)
            {
                if(arr[j] + arr[k] == num)
                {
                    (ipairSum[i])++;
                }
            }
        }
    }
    
    cout << endl << "Pair sum : ";
    for(i = 0; i < testCases; i++ )
    {
        cout << ipairSum[i] << " ";
    }
    return 0;
}