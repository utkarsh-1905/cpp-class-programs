#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct data
    {
        int age;
        int current_year;
    };
    struct data a;
    scanf("%d %d", &a.age, &a.current_year);
    printf("%d\n", a.current_year - a.age);
    return 0;
}