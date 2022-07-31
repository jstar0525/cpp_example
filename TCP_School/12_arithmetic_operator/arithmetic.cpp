#include <iostream>
using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 3;

    cout << num1 + num2 << endl; // 13
    cout << num1 - num2 << endl; // 7
    cout << num1 * num2 << endl; // 30
    cout << num1 / num2 << endl; // 3
    cout << num1 % num2 << endl; // 1

    cout << endl;

    cout << 3 + 4 * 5 << endl; // 23
    cout << (3 + 4) * 5 << endl; // 35
    cout << 3 + 4 - 5 << endl; // 2

    return 0;
}