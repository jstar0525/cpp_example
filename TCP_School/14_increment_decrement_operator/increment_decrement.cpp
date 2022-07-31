#include <iostream>
using namespace std;

int main()
{
    int num1 = 8;
    int num2 = 8;
    int result1, result2;

    result1 = --num1 + 5;
    result2 = num2-- + 5;

    cout << result1 << ", " << num1 << endl; // 12, 7
    cout << result2 << ", " << num2 << endl; // 13, 7

    cout << endl;

    int x = 10;
    int y = x-- + 5 + --x;

    cout << x << ", " << y; // 8, 23

    return 0;
}