#include <iostream>

using namespace std;

class Myclass
{
    int num;

public:
    Myclass(int n)
    {
        num = n;
    }
    friend void operator-(Myclass &x);
};

void operator-(Myclass &x)
{
    cout << "num = " << -x.num << endl;
}

int main()
{
    Myclass obj(5);
    -obj;
    return 0;
}