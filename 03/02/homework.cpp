#include <iostream>
#include <string>

#include "homework.h"

using namespace std;

void execute()
{
    int tempNum;
    string tempStr;
    Counter countNum;
    cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    cin >> tempStr;
    cout << endl;
    do
    {
        if(tempStr == "да")
        {
            cout << "Введите начальное значение счётчика: ";
            cin >> tempNum;
            countNum.set(tempNum);
            cout << endl;
            break;
        }
        else if (tempStr == "нет")
        {
            tempNum = rand() % 101;
            countNum.set(tempNum);
            cout << endl;
            break;
        }
        else 
            cout << "Неверная команда, повторите ввод!" << endl;
    }while(1);
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