#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int& rA = a;

    cout << "���� a�� ���� " << a << "�Դϴ�.\n";
    cout << "���۷��� rA�� ���� " << rA << "�Դϴ�.\n";

    rA = 50;

    cout << "rA�� 50�� �����߽��ϴ�.\n";
    cout << "���۷��� rA�� ���� " << rA << "(��)�� ����Ǿ����ϴ�.\n";
    cout << "���� a�� ���� " << a << "(��)�� ����Ǿ����ϴ�.\n";
    cout << "���� a�� �ּҴ� " << &a << "�Դϴ�.\n";
    cout << "���۷��� rA�� �ּҵ� " << &rA << "�Դϴ�.\n";

    return 0;
}