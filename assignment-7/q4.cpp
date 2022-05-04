#include <iostream>

using namespace std;

class Negation
{
private:
    float inches;
    float feet;

public:
    Negation(float inches, float feet)
    {
        this->inches = inches;
        this->feet = feet;
    }
    void show()
    {
        cout << "(" << inches << "," << feet << ")" << endl;
    }
    Negation operator-()
    {
        feet = -feet;
        inches = -inches;
        return *this;
    }
};

int main()
{
    Negation n1(1, 2);
    Negation n2 = -n1;
    n2.show();
    return 0;
}