#include <stdio.h>
#include <math.h>

int main(){
    float num;
    float root;
    float ans=0.0;
    printf("Enter number : ");
    scanf("%f",&num);
    printf("\nEnter the nth-root you want : ");
    scanf("%f",&root);
    float nth=1/root;
    ans=pow(num,nth);
    printf("\nThe nth-root is = %f",ans);
    return 0;
}