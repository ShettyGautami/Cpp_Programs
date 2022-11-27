#include <iostream>
using namespace std;

void factor(int num, int i = 1)
{
    if(num/2 + 1== i)
    return;
    else
    {
        if(num % i == 0)
        {
            cout << " " << i;
        }
        factor(num, i + 1);
    }
}
int main() {
    int num = 0;
    cout << endl << "Enter the number : ";
    cin >> num;
    
    cout << endl << "Factors of " << num << " :";
    factor(num);
    
    cout << endl << "Thanks for visiting";

    return 0;
}