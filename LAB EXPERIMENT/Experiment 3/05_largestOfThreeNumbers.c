#include <stdio.h>
int main()
{
    //  conditionals
    int num1, num2, num3;
    printf("Enter First Number : ");
    scanf("%d", &num1);
    printf("Enter second Number : ");
    scanf("%d", &num2);
    printf("Enter third Number : ");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is greatest.", num1);
        }
        else
        {
            printf("%d is greatest.", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("%d is greatest.", num2);
        }
        else
        {
            printf("%d is greatest.", num3);
        }
    }

    return 0;
}
