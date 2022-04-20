// #include <stdio.h>
// int main()
// {
//   char str[20];
//   char ch= ' ';
//   while()
//   printf("%s",str);
//   return 0;
// }

/*
7th Jan, 2022
Problem 3

Roll Number:
Name: 

*/

#include <stdio.h>
#include <string.h>

// let stack = [];

//     // Traversing the Expression
//     for(let i = 0; i < expr.length; i++)
//     {
//         let x = expr[i];

//         if (x == '(' || x == '[' || x == '{')
//         {
            
//             // Push the element in the stack
//             stack.push(x);
//             continue;
//         }

//         // If current character is not opening
//         // bracket, then it must be closing. 
//         // So stack cannot be empty at this point.
//         if (stack.length == 0)
//             return false;
            
//         let check;
//         switch (x){
//         case ')':
//             check = stack.pop();
//             if (check == '{' || check == '[')
//                 return false;
//             break;

//         case '}':
//             check = stack.pop();
//             if (check == '(' || check == '[')
//                 return false;
//             break;

//         case ']':
//             check = stack.pop();
//             if (check == '(' || check == '{')
//                 return false;
//             break;
//         }
//     }

//     // Check Empty Stack
//     return (stack.length == 0);
// }

int balanced(char expression[])
{
        char x[100] ;
    for(int i = 0; i < strlen(expression); i++)
    {

        if ( expression[i]== '(' || expression[i] == '[' || expression[i] == '{')
        {
            x[strlen(expression)-i-1]=expression[i];
            continue;
        }
        if(strlen(x)==0){
            return 0;
        }
        char check;
        switch (expression[i]){
        case ')':
            check = x[strlen(expression)-i-1]; sx[strlen(expression)-i-1]="";
            if (check == '{' || check == '[')
                return 0;
            break;

        case '}':
            check = x[strlen(expression)-i-1]; x[strlen(expression)-i-1]="";
            if (check == '(' || check == '[')
                return 0;
            break;

        case ']':
            check = x[strlen(expression)-i-1]; x[strlen(expression)-i-1]="";
            if (check == '(' || check == '{')
                return 0;
            break;
        }
    }
    return strlen(x);
}

int main()
{
    int n, element, search;
    char expression[50];

    // while (scanf("%s", expression) != -1) {

    //   // Call the function 'balanced' here with expression as argument.
    //   // Print the return value according to output format specification.
    // }

    if (balanced("([)]") == 0)
    {
        printf("1");
    }

    return 0;
}
