#include <iostream>
using namespace std;

int mult(int num1 = 0, int num2 = 0)
{
    if(num2 == 1)
    {
        return num1;
    }
    else
    {
        int add = num1 + mult(num1, num2 - 1);
        return add;
    }
    
}
int main() {
    cout << mult(4, 8);
    return 0;
}