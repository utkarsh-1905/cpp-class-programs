#include <iostream>
using namespace std;

class Try
{
public:
    Try()
    {
        cout << "Constructor" << endl;
    }
    ~Try()
    {
        cout << "Destructor" << endl;
    }
    void func()
    {
        cout << "Function" << endl;
    }
};

int main()
{
    // Approach 1
    Try *try1 = new Try();
    try1->func();
    Try try2;
    try2.func();
    delete try1;
    return 0;

    // Approach 2
    Try *try3 = new Try[3];
    try3[0].func();
    try3[1].func();
    try3[2].func();
    delete[] try3;
    return 0;
}