#pragma once

class Counter
{
    private:
        int count;

    public:
        Counter (int num)           { count = num; }
        void add()                  { count++; }
        void subtract()             { count--; }
        int returnValue()           { return count; }
};