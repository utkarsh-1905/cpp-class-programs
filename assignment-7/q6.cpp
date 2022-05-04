#include <iostream>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }
    Time(int hour, int minute, int second)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    void show()
    {
        cout << "( " << hour << " H , " << minute << " M , " << second << " S )" << endl;
    }
    Time operator+(Time &t)
    {
        Time temp;
        if (second + t.second >= 60)
        {
            temp.second = second + t.second - 60;
            minute += 1;
        }
        else
        {
            temp.second = second + t.second;
        }

        if (minute + t.minute >= 60)
        {
            temp.minute = minute + t.minute - 60;
            hour += 1;
        }
        else
        {
            temp.minute = minute + t.minute;
        }
        temp.hour = hour + t.hour;
        return temp;
    }
};

int main()
{
    Time obj(5, 56, 58);
    Time obj2(3, 4, 5);
    Time obj3 = obj + obj2;
    obj3.show();
    return 0;
}