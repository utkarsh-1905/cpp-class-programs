#include <iostream>
using namespace std;

class Counter
{
public:
    int count = 0;
    Counter increment(Counter &c)
    {
        c.count++;
        return c;
    }
};

int main()
{
    Counter obj;
    obj.increment(obj);
    cout << obj.count << endl;
}