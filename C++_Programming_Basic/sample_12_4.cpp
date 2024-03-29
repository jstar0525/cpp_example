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
    cout << "차량 번호는 " << num << "입니다.\n";
    cout << "연료량은 " << gas << "입니다.\n";
}

void Car::setNumGas(int n, double g)
{
    if(g>0 && g<1000){
        num = n;
        gas = g;
        cout << "차량 번호는 " << num << "으로, 연료량을 " << gas << "으로 바꾸었습니다.\n";
    }
    else{
        cout << g << "는 올바른 연료량이 아닙니다.\n";
        cout << "연료량을 바꿀 수 없습니다.\n";
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
    cout << "차량 번호" << n << "연료량" << g << "인 자동차를 구입했습니다.\n";
}