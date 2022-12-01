#include <iostream>
using namespace std;

int power(int x, int n)
{
    if(n == 0)
    return 1;
    if(n == 1)
    return x;
    
    int multiply = x * power(x, n - 1);
    return multiply;
}
int main() {
    int num = 0, power_index = 0;
    cout << endl << "Enter the number : ";
    cin >> num;
    cout << endl << "Enter the power : ";
    cin >> power_index;
    cout << endl <<"Required answer : " << power(num, power_index);

    return 0;
}