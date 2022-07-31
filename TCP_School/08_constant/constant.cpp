#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    cout << "If you express the number 10 as a decimal, it's " << a << endl; // If you express the number 10 as a decimal, it's 10
    cout << oct;
    cout << "If you express the number 10 in octets, it's " << a << endl; // If you express the number 10 in octets, it's 12
    cout << hex;
    cout << "If you express the number 10 in hexadecimal numbers, it's " << a << endl; // If you express the number 10 in hexadecimal numbers, it's a

    auto b = 0b010111;
    cout << dec << b << endl; // 23

    const int ages = 30;
    cout << ages; // 30

    return 0;
}