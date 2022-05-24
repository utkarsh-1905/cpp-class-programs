#include <iostream>
using namespace std;

template <class T>

class MyClass
{
public:
    T a;
    MyClass()
    {
        a = 0;
        cout << "constructor" << endl;
    }
    T divideBy2()
    {
        return a / 2;
    }
};

int main()
{
    MyClass<int> obj;
    obj.a = 10;
    cout << obj.divideBy2() << endl;
    MyClass<float> obj2;
    obj2.a = 1.5;
    cout << obj2.divideBy2() << endl;
    return 0;
}