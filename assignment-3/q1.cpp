#include <iostream>
using namespace std;

class Counter
{
    int count = 0;

public:
    void increment()
    {
        count++;
    }
    void decrement()
    {
        count--;
    }
    int getCount()
    {
        return count;
    }
};

int main()
{
    Counter *count = new Counter[5];
    count[0].increment();
    cout << count[0].getCount() << endl;
    count[1].decrement();
    cout << count[1].getCount() << endl;
}