#include <iostream>
using namespace std;

class Car{
    private:
        int num;
        double gas;
    public:
        Car();
        Car(int n, double g);
        void show();
};

Car::Car()
{
    num = 0;
    gas = 0.0;
    cout << "자동차가 만들어졌습니다.\n";
}

Car::Car(int n, double g)
{
    num = n;
    gas = g;
    cout << "차량 번호가 " << num << "이며, 연료량이 " << gas << "인 자동차가 만들어졌습니다.\n";
}

int main()
{
    Car mycars[3]={
        Car(),
        Car(1234, 25.5),
        Car(4567, 52.2)
    };

    return 0;
}