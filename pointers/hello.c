#include <stdio.h>

struct person
{
    int age;
    int height;
};
int main()
{
    struct person a;
    scanf("%d %d", &a.age, &a.height);
    printf("%d\n", a.age);
    return 0;
}