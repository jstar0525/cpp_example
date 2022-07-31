#include <iostream>
using namespace std;

int main()
{
    int num1 = 15;
    int num2 = 8;

    cout << (~num1) << endl; // -16
    cout << (num2 << 2) << endl; // 32
    cout << (num2 >> 2) << endl; // 2

    return 0;
}