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
    strcpy(pF -> Name, "�ƹ���");
    pF -> Age = 22;
    pF->Height=177.7;
    cout << "�̸�=" << pF->Name << ", ����=" << pF->Age << ", Ű=" << pF->Height << endl;
    delete pF;
}