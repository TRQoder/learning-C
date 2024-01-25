#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter a  number to find Factorial : ");
    scanf("%d", &n);

    if (n > 0)
    {
        for (int i = 2; i <= n; i++)
        {
            fact = fact * i;
        }

        printf("Factorial of %d is %d . ", n, fact);
    }
    else
    {
        printf("Please Enter a Positive Number ....\n");
    }

    return 0;
}
