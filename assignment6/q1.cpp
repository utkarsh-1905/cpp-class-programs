#include <iostream>
using namespace std;

class Parent
{
public:
    int add(int x, int y)
    {
        return x + y;
    }
    int add(int x, int y, int z)
    {
        return x + y + z;
    }
};

int main()
{
    Parent obj;
    cout << obj.add(2, 3) << endl;
    cout << obj.add(2, 3, 4);
}