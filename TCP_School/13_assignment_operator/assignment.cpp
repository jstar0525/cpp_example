#include <iostream>
using namespace std;

int main()
{
    int num1 = 8;
    int num2 = 8;
    int num3 = 8;

    num2 += 5;
    num3 =+ 5;

    cout << num1 + 5 << endl; // 13
    cout << num2 << endl; // 13
    cout << num3; // 5

    return 0;
}