#include <iostream>
using namespace std;

int main()
{
    int num;
    
    cout << "Please write down the numbers :";
    cin >> num;

    cout << endl;

    // if
    if (num < 5)
    {
        cout << "The number you entered is less than 5." << endl;
    }
    if (num == 5)
    {
        cout << "The number you entered is 5." << endl;
    }
    if (num > 5)
    {
        cout << "The number you entered is greater than 5." << endl;
    }

    cout << endl;

    // if/else
    if (num < 5)
    {
        cout << "The number you entered is less than 5." << endl;
    }
    else
    {
        if (num == 5)
        {
            cout << "The number you entered is 5." << endl;
        }
        else
        {
            cout << "The number you entered is greater than 5." << endl;
        }
    }

    cout << endl;

    // if/else if/else
    if (num < 5)
    {
        cout << "The number you entered is less than 5." << endl;
    }
    else if (num == 5)
    {
        cout << "The number you entered is 5." << endl;
    }
    else
    {
        cout << "The number you entered is greater than 5." << endl;
    }

    cout << endl;

    // switch
    switch (num)
    {
        case 1:
            cout << "The number you entered is 1." << endl;
            break;
        case 2:
            cout << "The number you entered is 2." << endl;
            break;
        case 3:
            cout << "The number you entered is 3." << endl;
            break;
        case 4:
            cout << "The number you entered is 4." << endl;
            break;
        case 5:
            cout << "The number you entered is 5." << endl;
            break;
        default:
            cout << "Please enter the number from 1 to 5." << endl;
            break;
    }

    cout << endl;

    // without break
    switch (num)
    {
        case 1:
            cout << "The number you entered is 1." << endl;
        case 2:
            cout << "The number you entered is 2." << endl;
        case 3:
            cout << "The number you entered is 3." << endl;
        case 4:
            cout << "The number you entered is 4." << endl;
        case 5:
            cout << "The number you entered is 5." << endl;
        default:
            cout << "Please enter the number from 1 to 5." << endl;
    }

    cout << endl;

    char ch;
    
    cout << "Please write down the grade :";
    cin >> ch;

    switch (ch)
    {
        case 'a':
        case 'A':
            cout << "This student's grade is A." << endl;
            break;
        case 'b':
        case 'B':
            cout << "This student's grade is B." << endl;
            break;
        case 'c':
        case 'C':
            cout << "This student's grade is C." << endl;
            break;
        case 'd':
        case 'D':
            cout << "This student's grade is D." << endl;
            break;
        case 'f':
        case 'F':
            cout << "This student's grade is F." << endl;
            break;
        default:
            cout << "Please enter your grade correctly!(A, B, C, D, F)" << endl;
            break;
    }

    return 0;
}