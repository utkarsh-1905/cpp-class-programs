#include <iostream>
using namespace std;

namespace check
{
    bool condition = true;
};

int main()
{
    bool currentSituation = false;
    if (check::condition)
    {
        currentSituation = true;
    }
}