#include <iostream>

using namespace std;

class First
{
private:
    int a = 10;

public:
    int b = 20;
    void display()
    {
        cout << "a=" << a << endl;
    }
};

int main()
{
    First f;
    // b can be called by this obj but not a
    cout << f.b;
    f.display();
    return 0;
}