#include <iostream>
#include <Turboc.h>
using namespace std;

struct tag_Friend {
    char Name[10];
    int Age;
    double Height;
};

int main() 
{
    tag_Friend *pF = new tag_Friend;
    strcpy(pF -> Name, "아무개");
    pF -> Age = 22;
    pF->Height=177.7;
    cout << "이름=" << pF->Name << ", 나이=" << pF->Age << ", 키=" << pF->Height << endl;
    delete pF;
}