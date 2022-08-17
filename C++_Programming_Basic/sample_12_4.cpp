#include <iostream>
using namespace std;

class Car{
    private:
        int num;
        double gas;
    public:
        int getNum(){return num;}
        double getGas(){return gas;}
        void show();
        void setNumGas(int n, double g);
};

void Car::show()
{
    cout << "���� ��ȣ�� " << num << "�Դϴ�.\n";
    cout << "���ᷮ�� " << gas << "�Դϴ�.\n";
}

void Car::setNumGas(int n, double g)
{
    if(g>0 && g<1000){
        num = n;
        gas = g;
        cout << "���� ��ȣ�� " << num << "����, ���ᷮ�� " << gas << "���� �ٲپ����ϴ�.\n";
    }
    else{
        cout << g << "�� �ùٸ� ���ᷮ�� �ƴմϴ�.\n";
        cout << "���ᷮ�� �ٲ� �� �����ϴ�.\n";
    }
}

void buy(Car* pC);

int main()
{
    Car car1;

    car1.setNumGas(1234, 20.5);

    buy(&car1);

    return 0;
}

void buy(Car* pC)
{
    int n = pC->getNum();
    double g = pC->getGas();
    cout << "���� ��ȣ" << n << "���ᷮ" << g << "�� �ڵ����� �����߽��ϴ�.\n";
}