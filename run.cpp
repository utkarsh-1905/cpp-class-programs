#include <iostream>
using namespace std;

int main()
{
    int x;
    int *p;
    int *q;
    p = new int[10];
    q = p;
    *p = 4;
    for (int j = 0; j < 10; j++)
    {
        x = *p;
        p++;
        *p = x + j;
    }
    for (int k = 0; k < 10; k++)
    {
        cout << *q << " ";
        q++;
    }
    cout << endl;
    return 0;
}