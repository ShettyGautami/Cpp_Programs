#include <iostream>
using namespace std;

int print_number(int num)
{
    if(num <= 1)
    return 1;
    
    cout << num << " ";
    print_number(num - 1);
}

int main() {
    cout << print_number(6);

    return 0;
}