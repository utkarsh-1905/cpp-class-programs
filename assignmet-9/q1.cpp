#include <iostream>
using namespace std;

template <typename T>
T MyMax(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    int a = 5, b = 20;
    cout << MyMax<int>(a, b) << endl;
}