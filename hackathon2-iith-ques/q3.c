#include <stdio.h>
#include <string.h>

int main()
{
    char num1[100];
    char num2[100];
    scanf("%s %s", num1, num2);
    char sum[100];
    for (int i = 100; i > 0; i--)
    {
        int carry = 0;
        if (num1[i] + num2[i] > 9)
        {
            carry = (num1[i] + num2[i]) - 9;
            sum[i] = 9;
        }
        else
        {
            sum[i] = (num1[i] + num2[i]);
        }
    }
    printf("%s", sum);
    return 0;
}