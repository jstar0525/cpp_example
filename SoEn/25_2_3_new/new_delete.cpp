#include <iostream>
using namespace std;

int main()
{
    int *pi = new int;
    *pi = 123;
    cout << *pi;
    delete pi;
}