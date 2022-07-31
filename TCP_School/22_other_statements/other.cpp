#include <iostream>
using namespace std;

int main()
{
    int except_num = 2;
 
    for (int i = 0; i <= 10; i++)
    {
        if (i % except_num == 0)
        {
            continue;
        }
        cout << i << " "; // 1 3 5 7 9 
    }

    cout << endl;

    int num = 1, sum = 0;
    int end_num = 10;

    while (1) // 무한 루프
    {
        sum += num;
        if (num == end_num)
        {
            break;
        }
        num++;
    }
    cout << "The value added from 1 to " << end_num << " is " << sum << "."; // The value added from 1 to 10 is 55.

    return 0;
}