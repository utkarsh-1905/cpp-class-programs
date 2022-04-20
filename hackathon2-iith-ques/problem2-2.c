#include <stdio.h>
#include <stdlib.h>
int subtract(int *ptr1, int *ptr2)
{
    int sub;
    sub = *ptr1 - *ptr2;
    return sub;
}
int main(void)
{
    int *num, a, r, d, *temp;
    num = (int *)malloc(sizeof(int) * 4);
    // while (scanf("%d, %d, %d, %d", (num + 0), (num + 1), (num + 2), (num + 3)) != -1)
    scanf("%d %d %d %d", (num + 0), (num + 1), (num + 2), (num + 3));
    temp = (num + 0);
    a = *temp;
    r = (subtract((num + 3), (num + 2))) / (subtract((num + 2), (num + 1)));
    d = (*(num+1))-(a*r);
    printf("%i %i %i\n", a, r, d);

    free(num);
}