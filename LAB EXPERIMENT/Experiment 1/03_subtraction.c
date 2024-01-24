#include <stdio.h>

int main()
{
    int a, b, diff;
    printf("Enter first number :");
    scanf("%d", &a);
    printf("Enter second number :");
    scanf("%d", &b);

    if(a>b){
        diff = a - b;
    }else{
         diff = b - a;
    }

    printf("Difference : %d\n",diff);
    

    return 0;
}
