#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter 2 numbers : \n");
    scanf("%d %d", &num1, &num2);

    printf("Before Swapping : %d %d \n", num1, num2);

    int *ptrA = &num1;
    int *ptrB = &num2;

    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    printf("After Swapping : %d %d \n", num1, num2);

    return 0;
}
