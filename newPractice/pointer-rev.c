#include <stdio.h>
#include <stdlib.h>

struct data
{
    int age;
    int current_year;
};

int main()
{
    struct data a;
    scanf("%d %d", &a.age, &a.current_year);
    printf("%d\n", a.current_year - a.age);
}