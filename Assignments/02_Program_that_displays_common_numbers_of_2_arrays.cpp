#include <iostream>
using namespace std;

int main() {
    int *arr1, *arr2, *same;
    int size1 = 0, size2 = 0,attempts = 0, i, j, k, l;
    
    cout <<endl<<"Number of attempts : ";
    cin>>attempts;
    
    for(i = 0; i < attempts; i++)
    {
        cout << endl << "For attempt " << i + 1 << endl<<"Enter size of array 1 : ";
        cin >> size1;
        arr1 = (int*) calloc(size1,sizeof(int));
        if(arr1 == NULL)
        {
            cout << "\nMemory allocation failed.";
        }
        //Accepting elements
        for(j = 0; j < size1; j++)
        {
            cout << endl<<"Element no "<< j + 1<< ": ";
            cin >> arr1[j];
        }
        
        cout << endl << "For attempt " << i + 1 <<endl << "Enter size of array 2 : ";
        cin >> size2;
        arr2 = (int*) calloc(size2,sizeof(int));
        if(arr2 == NULL)
        {
            cout << "\nMemory allocation failed.";
        }
        //Accepting elements
        for(j = 0; j < size2; j++)
        {
            cout << endl<<"Element no "<< j + 1<< ": ";
            cin >> arr2[j];
        }
        //for allocating memory of same
        if(size1 >= size2)
        {
            same = (int*) calloc(size2,sizeof(int));
        }
        else
        {
            same = (int*) calloc(size1,sizeof(int));
        }
        
        if(same == NULL)
        {
            cout << "\nMemory allocation failed.";
        }
        
        for(j = 0, l = 0; j < size1; j++)
        {
            for(k = 0; k < size2; k++)
            {
                if(arr1[j] == arr2[k])
                {
                    same[l] = arr1[j];
                    l = l + 1;
                }
            }
        }
    }
    
    cout << endl << "Same elements : ";
    for(i = 0; same[i] != 0; i++)
    {
        cout << same[i]<< " ";
    }
    return 0;
}