#include <iostream>
using namespace std;

struct Car{
    int num;
    double gas;
};

void show(Car* pC);

int main()
{
    Car car1 = {0, 0.0};

    cout << "���� ��ȣ�� �Է��Ͻʽÿ�.\n";
    cin >> car1.num;

    cout << "���ᷮ�� �Է��Ͻʽÿ�.\n";
    cin >> car1.gas;

    show(&car1);

    return 0;
}

void show(Car* pC)
{
    cout << "���� ��ȣ�� " << pC->num << "������ ���� " << pC->gas << "�Դϴ�.\n";
}