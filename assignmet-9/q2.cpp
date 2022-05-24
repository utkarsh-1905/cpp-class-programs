#include <iostream>
using namespace std;

template <typename T>
T bubbleSort(T a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                T temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    // return a[n-1];
}

int main()
{
    int a[] = {5, 20, 3, 4, 1, 2};
    bubbleSort(a, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << "" << endl;
    char c[] = {'e', 'k', 'l', 'a', 'b', 'm'};
    bubbleSort(c, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << c[i] << " ";
    }
    cout << "" << endl;
}