#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int i = 0;
    
    cout << "Please write down the numbers :";
    cin >> num;

    cout << endl;

    // while
    while (i < num)
    {
        cout << "The while statement is currently running the " << i + 1 << " iteration." << endl;
        i++; // 이 부분을 삭제하면 무한 루프에 빠지게 됨
    }
    cout << "After the while statement ends, the value of variable i is " << i << "." << endl;

    cout << endl;

    // do-while
    i = 0;

    do {
        cout << "The do / while statement is currently running the " << i + 1 << " iteration." << endl;
        i++; // 이 부분을 삭제하면 무한 루프에 빠지게 됨
    } while (i > num);
    cout << "After the do / while statement ends, the value of variable i is " << i << "." << endl;

    cout << endl;

    // for
    for (i = 0; i < num; i++)
    {
        cout << "The for statement is currently being repeated for the " << i + 1 << " time." << endl;
    }
    cout << "After the for statement ends, the value of variable i is " << i << "." << endl;

    cout << endl;

    // array
    int arr[5] = {1, 3, 5, 7, 9};

    for (int element : arr)
    {
        cout << element << " ";
    }

    return 0;
}
