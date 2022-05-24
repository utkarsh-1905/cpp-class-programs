#include <iostream>

using namespace std;

class base
{
public:
    virtual void func()
    {
        cout << "I am virtual" << endl;
    }
    void printRandom()
    {
        cout << "abra9fj9asjdajs" << endl;
    }
};

class derived : public base
{
public:
    void func()
    {
        cout << "I am not virtual" << endl;
    }
    void printRandom()
    {
        cout << "kadabraoajfiasjid" << endl;
    }
};

int main()
{
    base *baseptr;
    derived obj;
    baseptr = &obj;
    baseptr->func();
    baseptr->printRandom();
}
