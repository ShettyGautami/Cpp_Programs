#include <iostream>
using namespace std;

int recursionNum(int num)
{
    static int count = 0;
    if(num > 0)
    {
        count++;
        recursionNum(num / 10);
    }
    else
    {
        return count;
    }
}
int main() {
  
    cout << endl << recursionNum(4584);
    return 0;
}