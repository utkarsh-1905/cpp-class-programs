#include <iostream>
using namespace std;

class Resolve
{
public:
    int gvar = 20;
    static int svar;
    void displayHello();
};

void Resolve::displayHello()
{
    cout << "Hello World!" << endl;
}

int Resolve::svar = 10;

int main()
{
    Resolve r;
    r.displayHello();
    int gvar = 30;
    cout << gvar << endl;
    cout << r.gvar << endl;
    cout << r.svar << endl;
}