#include <iostream>
using namespace std;

int main()
{
    int res;

    cout << "������ �Է��Ͻʽÿ�.\n";

    cin >> res;

    if(res==1){
        cout << "1�� �ԷµǾ����ϴ�.\n";
    }
    else if(res==2){
        cout << "2�� �ԷµǾ����ϴ�.\n";
    }
    else {
        cout << "1 �Ǵ� 2�� �Է��Ͻʽÿ�.\n";
    }

    return 0;
}