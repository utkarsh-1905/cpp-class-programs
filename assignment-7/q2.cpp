#include <iostream>

using namespace std;

class MyClass
{
private:
    int num;

public:
    MyClass()
    {
        num = 1;
    }
    void show()
    {
        cout << num << endl;
    }

    MyClass operator++(int)
    {
        num++;
        return *this;
    }
};

int main()
{
    MyClass obj;
    MyClass obj2;
    obj.show();
    obj2 = obj++;
    obj2.show();
    return 0;
}