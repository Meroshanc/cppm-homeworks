#pragma once

class Calculator
{
    private:
    double num1, num2;

    public:
    double add()            { return num1+num2; }
    double multiply()       { return num1*num2; }
    double subtract_1_2()   { return num1-num2; }
    double subtract_2_1()   { return num2-num1; }
    double divide_1_2()     { return num1/num2; }
    double divide_2_1()     { return num2/num1; }
    bool set_num1(double num1)
    {
        if(num1 !=0)
        {
            this->num1 = num1;
            return true;
        }
        return false;
    }
    bool set_num2(double num2)
    {
        if(num2 !=0)
        {
            this->num2 = num2;
            return true;
        }
        return false;
    }
};