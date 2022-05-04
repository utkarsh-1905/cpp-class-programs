#include <iostream>

using namespace std;

class Conversion
{
private:
    int num;

public:
    Conversion(int num)
    {
        this->num = num;
    }

    void show()
    {
        cout << num;
    }

    int convert(Conversion &obj)
    {
        return obj.num;
    }
};

int main()
{
    Conversion obj(89);

    int num = obj.convert(obj);

    cout << num;

    return 0;
}