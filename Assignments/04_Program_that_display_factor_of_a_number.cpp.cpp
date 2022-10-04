#include <iostream>
using namespace std;

void factor(int num = 0)
{
    for(int i = 1; i <= num/2;i++)
    {
        if(num % i == 0)
        {
            cout << " " << i;
        }
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