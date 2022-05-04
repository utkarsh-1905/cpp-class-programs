#include <iostream>
using namespace std;

class base
{
public:
    void print()
    {
        cout << "base";
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "derived";
    }
};

class one
{
public:
    void printOne()
    {
        cout << '1';
    }
};
class two : public one
{
public:
    void printTwo()
    {
        cout << '2';
    }
};
class three
{
public:
    void printThree()
    {
        cout << '3';
    }
};

int main()
{
    base *baseptr;
    derived obj;
    baseptr = &obj;
    baseptr->print();
    derived *ptr;
    ptr->print();

    one *obj1 = new one();
    obj1->printOne();

    one *obj2 = new two();

    obj2->printOne();
}
