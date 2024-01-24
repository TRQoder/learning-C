#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter first number : \n");
    scanf("%d", &a);
    printf("Enter second number : \n");
    scanf("%d", &b);
    printf("Before Swapping : %d %d \n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping : %d %d ", a, b);

    return 0;
}
