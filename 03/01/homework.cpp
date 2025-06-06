#include <iostream>
#include <string>

#include "homework.h"

using namespace std;

void execute()
{
    Calculator calc;
    double temp_num1, temp_num2;
    do
    {
        cout << "Введите num1: ";
        cin >> temp_num1;
        if(!calc.set_num1(temp_num1))
            cout << endl << "Неверный ввод!" << endl;
    } while(temp_num1 == 0);

    do
    {
        cout << "Введите num2: ";
        cin >> temp_num2;
        if(!calc.set_num2(temp_num2))
            cout << endl << "Неверный ввод!" << endl;
    } while(temp_num2 == 0);
    cout << "num1 + num2 = " << calc.add()          << endl;
    cout << "num1 - num2 = " << calc.subtract_1_2()   << endl;
    cout << "num2 - num1 = " << calc.subtract_2_1()   << endl;
    cout << "num1 * num2 = " << calc.multiply()     << endl;
    cout << "num1 / num2 = " << calc.divide_1_2() << endl;
    cout << "num2 / num1 = " << calc.divide_2_1() << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    while(1)
    {
        execute();
    }
    return 0;
}