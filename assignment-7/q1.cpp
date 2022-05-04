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

    void operator++(int)
    {
        num = num + 1;
    }
};

int main()
{
    MyClass obj;
    obj.show();
    obj++;
    obj.show();
    return 0;
}