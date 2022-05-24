#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    void setComplex(float a, float b)
    {
        real = a;
        imag = b;
    }
    void display()
    {
        cout << "Real part: " << real << endl;
        cout << "Imaginary part: " << imag << endl;
    }
    Complex calcSum(Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
};

int main()
{
    Complex obj;
    obj.setComplex(10, 20);
    obj.display();
    Complex obj2;
    obj2.setComplex(30, 40);
    obj2.display();
    Complex obj3 = obj.calcSum(obj2);
    obj3.display();
    return 0;
}