#include <stdio.h>

int main(){


    printf("********************\n\n");
    printf("Calculator in C Language for two numbers:\n\n");
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 5 for Modulas\n\n");
    printf("Enter 0 to Exit\n\n");
    printf("********************\n\n");

    int code;

    printf("Enter Code : ");
    
    scanf("%d",&code);

    int a=0;
    int b=0;
    int c=0;
    
    while(code!=0){
        switch (code)
        {
        case 1:
            printf("*****ADDITION*****\n\n");
            printf("Enter 2 numbers : ");
            scanf("%d\n",&a);
            scanf("%d",&b);
            c=a+b;
            printf("The sum is = %d\n\n",c);
            printf("******************\n\n");
            break;

            case 2:
            printf("*****SUBTRACTION*****\n\n");
            printf("Enter 2 numbers : ");
            scanf("%d\n",&a);
            scanf("%d",&b);
            c=a-b;
            printf("The difference is = %d\n\n",c);
            printf("*********************\n\n");
            break;

            case 3:
            printf("*****MULTIPLICATION*****\n\n");
            printf("Enter 2 numbers : ");
            scanf("%d\n",&a);
            scanf("%d",&b);
            c=a*b;
            printf("The product is = %d\n\n",c);
            printf("************************\n\n");
            break;

            case 4:
            printf("*****DIVISION*****\n\n");
            printf("Enter 2 numbers : ");
            scanf("%d\n",&a);
            scanf("%d",&b);
            c=a/b;
            printf("The quotient is = %d\n\n",c);
            printf("******************\n\n");
            break;

            case 5:
            printf("*****MODULAS*****\n\n");
            printf("Enter 2 numbers : ");
            scanf("%d\n",&a);
            scanf("%d",&b);
            c=a%b;
            printf("The modulas is = %d\n\n",c);
            printf("*****************\n\n");
            break;
        
        default:
            printf("INVALID CODE \n");
            break;
        }
        printf("Enter Code : ");
        scanf("%d\n",&code);
    }

    printf("Thank You for Using the Calculator\n");

    return 0;
}
