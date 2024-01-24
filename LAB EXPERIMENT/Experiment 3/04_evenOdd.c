#include <stdio.h>
int main()
{
    int num;
    printf("Enter an Integer : ");
    scanf("%d", &num);

    if (num > 0)
    {
        if (num % 2 == 0)
        {
            printf("%d is Even. ", num);
        }
        else
        {
            printf("%d is Odd. ", num);
        }
    }
    else
    {
        printf("Please Enter a Positive Integer .....");
    }

    return 0;
}
