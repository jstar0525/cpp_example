#include <iostream>
using namespace std;

int main()
{
    int num1 = 11;
    int num2 = 10;
    int result;

    result = (num1 < num2) ? num1 : num2;
    cout << result <<endl; // 10

    cout << endl;

    int num3 = 15, num4 = 8;

    cout << num3 << ", " << num4 << endl; // 15, 8

    cout << endl;

    cout << sizeof(char) << endl; // 1 byte
    cout << sizeof(short) << endl; // 2 byte
    cout << sizeof(int) << endl; // 4 byte
    cout << sizeof(long) << endl; // 4 byte
    cout << sizeof(long long) << endl; // 8 byte
    cout << sizeof(float) << endl; // 4 byte
    cout << sizeof(double) << endl; // 8 byte
    cout << sizeof(long double) << endl; // 16 byte

    return 0;
}