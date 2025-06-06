#pragma once

class Counter
{
    private:
        int count;

    public:
        void set(int num)
        {
            this->count = num;
        }
        void add()
        {
            this->count +=1;
        }
        void subtract()
        {
            this->count -=1;
        }
        int returnValue()
        {
            return this->count;
        }
};