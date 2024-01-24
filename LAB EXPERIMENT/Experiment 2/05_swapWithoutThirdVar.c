#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter first number : \n");
    scanf("%d", &a);
    printf("Enter second number : \n");
    scanf("%d", &b);
    printf("Before Swapping : %d %d \n", a, b);

    // method 1
    a = a + b;
    b = a - b;
    a = a - b;

    // method 2
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;

    printf("After Swapping : %d %d ", a, b);

  
    
    
    return 0;
}