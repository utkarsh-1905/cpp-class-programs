#include <stdio.h>
#include <stdlib.h>

int main()
{
        int *inp;
        inp = (int*)malloc(4*sizeof(int));
        scanf("%d %d %d %d",inp,inp+1,inp+2,inp+3);
        int *ptr1 = inp;
        int a = *inp;
        int d1 = (*(inp+3)-*(inp+2));
        int d2 = (*(inp+2)-*(inp+1));
        int r = d1/d2;
        int d = (*(inp+1))-(a*r);
        printf("%d %d %d",a,r,d);
        free(inp);
        return 0;
}