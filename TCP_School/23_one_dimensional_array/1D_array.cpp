#include <iostream>
using namespace std;

int main()
{

    // 1차원 배열
    int sum = 0;
    //int grade[3]; // 길이가 3인 int형 배열 선언
    int grade[3] = {85, 65, 90}; // 길이가 3인 int형 배열의 선언과 동시에 초기화
    grade[3] = 100;              // grade[3]를 선언하지 않고 초기화 진행

    // 인덱스를 이용한 배열의 초기화
    //grade[0] = 85; // 국어 점수
    //grade[1] = 65; // 영어 점수
    //grade[2] = 90; // 수학 점수

    for (int i = 0; i < 4; i++)
    {
        sum += grade[i]; // 인덱스를 이용한 배열로의 접근
    }
    
    cout << "The total score for the subject is " << sum << ", The average score is " << (double)sum/4 <<"." << endl;

    int len = sizeof(grade) / sizeof(grade[0]); // 배열의 길이를 구하는 공식
    cout << "The length of the array grade is " << len << ".";

    return 0;
}