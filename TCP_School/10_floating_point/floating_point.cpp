#include <iostream>
using namespace std;

int main()
{
    int i;
    float sum = 0;

    for (i = 0; i < 1000; i++)
    {
        sum += 0.1;
    }

    cout << sum; // 99.999, it is not 1000

    return 0;
}