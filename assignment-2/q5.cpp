#include <iostream>
using namespace std;

class Demonstrate
{
public:
    Demonstrate()
    {
        cout << "Constructor" << endl;
    }
    void disp()
    {
        cout << "Disp" << endl;
    }
    ~Demonstrate()
    {
        cout << "Destructor" << endl;
    }
};

int main()
{
    Demonstrate d;
    d.disp();
    return 0;
}