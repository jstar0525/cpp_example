#include <iostream>
using namespace std;

int main()
{
    int num = 2147483647;
    cout << num << endl;   // 2147483647

    // overflow
    num = 2147483648;
    cout <<  num << endl; // -2147483648

    float num01 = 3.1415926535897932;  // float 타입의 유효 자릿수는 소수점 6자리
    cout << num01 << endl; // 3.14159
    cout.precision(17); // 17자리로 설정  
    cout << num01 << endl; // 3.1415927410125732

    double num02 = 3.1415926535897932; // double 타입의 유효 자릿수는 소수점 15자리
    cout << num02; // 3.1415926535897931

    return 0;
}