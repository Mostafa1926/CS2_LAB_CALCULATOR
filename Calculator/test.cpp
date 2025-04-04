#include <iostream>
#include <string>
#include "Calculator.h"
#include "Calculator.cpp"

using namespace std;

int main()
{
    char calculation;
    double num1, num2;

    cout << "Enter your calculation (e.g., 5+3): ";
    cin >> num1 >> calculation;
    if (calculation == '!')
        num2 = 0;
    else
        cin >> num2;
    // for (int i = 0; i < calculation.size(); i++)
    // {
    // int last = 0;
    // if (calculation[i] == '+' || calculation[i] == '-' || calculation[i] == '*' || calculation[i] == '/' || calculation[i] == 'g' || calculation[i] == 'l' || calculation[i] == 'r')
    // {
    //     foundOp = calculation[i];
    //     str1 = calculation[i - 1] - '0';
    //     str2 = calculation[i + 1] - '0';
    // }
    // else if (calculation[i] == '!')
    // {
    //     foundOp = calculation[i];
    //     str1 = calculation[i - 1] - '0';
    // }

    // str1 += calculation[i];
    // str2 += calculation[i];

    if (calculation == '+')
    {
        cout << add(num1, num2) << endl;
    }
    else if (calculation == '-')
    {

        cout << subtract(num1, num2) << endl;
    }
    else if (calculation == '*')
    {

        cout << multiply(num1, num2) << endl;
    }
    else if (calculation == '/')
    {

        cout << divide(num1, num2) << endl;
    }
    else if (calculation == '!')
    {

        cout << factorial(num1) << endl;
    }
    else if (calculation == 'g')
    {

        cout << GCD(num1, num2) << endl;
    }
    else if (calculation == 'l')
    {
        cout << LCM(num1, num2) << endl;
    }
    else if (calculation == 'r')
    {
        cout << randomNumber(num1, num2) << endl;
    }
    else
    {
        cout << "Invalid operation" << endl;
    }
    //}

    return 0;
}
