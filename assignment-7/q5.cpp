#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void show()
    {
        cout << "( " << real << " + i" << imag << " )" << endl;
    }

    Complex operator+(Complex &c)
    {
        Complex temp(real + c.real, imag + c.imag);
        return temp;
    }
};

int main()
{
    Complex obj(5, 9);
    Complex obj2(3, 4);
    Complex obj3 = obj + obj2;
    obj3.show();
    return 0;
}