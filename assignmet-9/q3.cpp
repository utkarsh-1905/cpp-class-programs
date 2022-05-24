#include <iostream>
using namespace std;

template <typename T, typename U>
void show(T a, U b)
{
    cout << a << " " << b << endl;
}

int main()
{
    show(100, "hello hello");
    show("k", 1500);
    show(1.23, 2987);
}