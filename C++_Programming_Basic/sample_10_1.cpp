#include <iostream>
using namespace std;

void func();

int a = 0;

int main()
{
    int b = 1;

    cout << "main �Լ������� ���� a�� b�� ����� �� �ֽ��ϴ�.\n";
    cout << "���� a�� ���� " << a << "�Դϴ�.\n";
    cout << "���� b�� ���� " << b << "�Դϴ�.\n";
    // cout << "���� c�� ���� " << c << "�Դϴ�.\n";

    func();

    return 0;
}

void func()
{
    int c = 2;

    cout << "func �Լ������� a�� c�� ����� �� �ֽ��ϴ�.\n";
    cout << "���� a�� ���� " << a << "�Դϴ�.\n";
    // cout << "���� b�� ���� " << b << "�Դϴ�.\n";
    cout << "���� c�� ���� " << c << "�Դϴ�.\n";
}