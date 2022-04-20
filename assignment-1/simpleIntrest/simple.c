#include <stdio.h>

int main(){
    int principal;
    float rate;
    int time;
    printf("Enter the Principal amount : ");
    scanf("%d",principal);
    printf("\nEnter the percent of rate of intrest : ");
    scanf("%f",rate);
    printf("\nEnter the time in years : ");
    scanf("%d",time);
    float si = (principal*rate*time)/100;
    float amount=principal+si;
    printf("\nThe simple intrest is = %f",si);
    printf("\nThe final amount is = %f",amount);
    return 0;
}