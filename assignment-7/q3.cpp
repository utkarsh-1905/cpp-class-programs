#include <iostream>

using namespace std;

class Distance
{
private:
    int x, y;

public:
    Distance(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    void show()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }

    Distance operator+(Distance &d)
    {
        Distance temp(x + d.x, y + d.y);
        return temp;
    }
};

int main()
{
    Distance d1(1, 2);
    Distance d2(3, 4);
    Distance d3 = d1 + d2;
    d3.show();
    return 0;
}