#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str0[20];
    char str1[10];
    char str2[10];

    strcpy(str1, "Hello");
    strcpy(str2, "Goobye");
    strcpy(str0, "str1");
    strcpy(str0, "str2");

    cout << "�迭 str1��(��) " << str1 << "�Դϴ�.\n";

    cout << "�迭 str2��(��) " << str2 << "�Դϴ�.\n";

    cout << "�����ϸ� " << str0 << "�Դϴ�.\n";

    return 0;
}