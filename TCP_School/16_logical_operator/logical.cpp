#include <iostream>
using namespace std;

int main()
{
    int num1 = 3;
    int num2 = -7;
    bool result1, result2;

    result1 = (num1 > 0) && (num1 < 5);
    result2 = (num2 < 0) || (num2 > 10);

    cout << result1 << endl; // 1
    cout << result2 << endl; // 1
    cout << !result2 << endl; // 0

    return 0;
}