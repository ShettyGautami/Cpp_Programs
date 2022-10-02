#include <iostream>
using namespace std;

int fibonassiNum(int num)
{
    if(num == 0)
    return 0;
    
    if(num == 1)
    return 1;
    
    int smallOutput1 = fibonassiNum(num - 1);
    int smallOutput2 = fibonassiNum(num - 2);
    
    return (smallOutput1 + smallOutput2);
}

int main()
{
    int num = 0, index = 0;
    cout << endl <<"Enter the index : ";
    cin >> num;
    
    index = fibonassiNum(num);
    
    cout << endl << "Fibonassi Number : "<<index;
}