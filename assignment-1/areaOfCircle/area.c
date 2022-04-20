#include <stdio.h>

int main(){
    printf("Enter the radius : ");
    int radius;
    scanf("%d",&radius);
    float area=3.14*radius*radius;
    printf("\nThe area of circle is = %f",area);
    return 0;
}