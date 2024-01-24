#include <stdio.h>
int main()
{
    float floatingNum;
    printf("Enter a Floating point number : ");
    scanf("%f", &floatingNum);
    int integerNum = (int)floatingNum; // Type Casting
    printf("Floating point Number : %f\n", floatingNum);
    printf("Integer Number : %d\n", integerNum);

    return 0;
}
