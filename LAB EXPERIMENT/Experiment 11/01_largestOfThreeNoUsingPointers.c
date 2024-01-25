#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Enter third number : ");
    scanf("%d", &c);

    int *ptrA = &a;
    int *ptrB = &b;
    int *ptrC = &c;

    int largest = (*ptrA > *ptrB) ? ((*ptrB > *ptrC) ? *ptrA : *ptrC) : ((*ptrB > *ptrC) ? *ptrB : *ptrC);
    printf("Largest : %d\n", largest);

    return 0;
}
