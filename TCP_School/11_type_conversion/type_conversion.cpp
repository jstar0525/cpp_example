#include <iostream>
using namespace std;

int main()
{
    int num1 = 3.1415; // 소수 부분 자동 삭제
    int num2 = 8.3E12; // int형 변수 최대 범위 초과
    double num3 = 5; // 문제 없음

    cout << num1 << endl; // 3
    cout << num2 << endl; // 2147483647
    cout << num3 << endl; // 5

    cout << endl;

    double result1 = 5 + 3.14; // int + double > double + double
    double result2 = 5.0f + 3.14; // float + double > double + double

    cout << result1 << endl; // 8.14
    cout << result2 << endl; // 8.14

    cout << endl;

    int num4 = 1;
    int num5 = 4;

    double result3 = num4 / num5; // int type
    double result4 = (double) num4 / num5; // C언어와 C++ 둘 다 사용 가능함.
    double result5 = double (num4) / num5; // C++에서만 사용 가능함.

    cout << result3 << endl; // 0
    cout << result4 << endl; // 0.25
    cout << result5 << endl; // 0.25

    return 0;
}