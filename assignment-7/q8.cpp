#include <iostream>

using namespace std;

class Conversion
{
private:
    float num;

public:
    Conversion(float num)
    {
        this->num = num;
    }

    void show()
    {
        cout << "The number is: " << num << endl;
    }

    Conversion convert(float num)
    {
        Conversion temp(num);
        return temp;
    }
};

int main()
{
    Conversion obj(5);
    Conversion obj2 = obj.convert(5);
    obj2.show();
    return 0;
}