#include <iostream>
#include <math.h>

using namespace std;

class Conversion
{
private:
    int r;
    int theta;

public:
    Conversion(int r, int theta)
    {
        this->r = r;
        this->theta = theta;
    }

    void show()
    {
        cout << r << " " << theta;
    }

    Conversion cartesian(Conversion &obj)
    {
        Conversion obj2(obj.r * cos(obj.theta), obj.r * sin(obj.theta));
        return obj2;
    }
};

int main()
{
    Conversion obj(5, 45);
    Conversion obj2 = obj.cartesian(obj);
    obj2.show();
    return 0;
}