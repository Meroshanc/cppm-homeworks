#include <iostream>
#include <string>

#include "homework.h"

using namespace std;

int setNum(string answer)
{
    int tempNum;
    do
    {
        if (answer == "да")
        {
            cout << "Введите начальное значение счётчика: ";
            cin >> tempNum;
            cout << endl;
            break;
        }
        else if (answer == "нет")
        {
            cout << endl;
            tempNum = 1;
            break;
        }
        else
            cout << "Неверная команда, повторите ввод!" << endl;
    } while (1);
    return tempNum;
}

void execute()
{
    string tempStr;
    cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    cin >> tempStr;
    cout << endl;
    Counter countNum(setNum(tempStr));
    do
    {
        cout << "Введите команду ('+', '-', '=' или 'x'): ";
        cin >> tempStr;
        if(tempStr == "+")
        {
            countNum.add();
        }
        else if (tempStr == "-")
        {
            countNum.subtract();
        }
        else if(tempStr == "=")
        {
            cout << countNum.returnValue() << endl;
        }
        else if(tempStr == "x")
        {
            cout << "До свидания!" << endl;
            break;
        }
        else
            cout << "Неверная команда, повторите ввод!" << endl;
    } while (1);
}


int main()
{
    setlocale(LC_ALL, "Russian");
    execute();
    return 0;
}