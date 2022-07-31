#include <iostream>

using namespace std;

int main()
{
    int *ar = new int[5];
    int i;
    for (i=0;i<5;i++) {
        ar[i] = i;
    }
    for (i=0;i<5;i++) {
        cout << i << "¹øÂ° = " << ar[i] << endl;
    }
    delete [] ar;
}