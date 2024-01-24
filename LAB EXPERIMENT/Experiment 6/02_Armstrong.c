#include <stdio.h>
int main()
{
    int n, num, ld, sum = 0;
    printf("Enter a  number : ");
    scanf("%d", &n);
    num = n;

    while (n > 0)
    {
        ld = n % 10;
        sum = sum + ld * ld * ld;
        n = n / 10;
    }
    if (num == sum)
    {
        printf("%d is Armstrong. ", num);
    }
    else
    {
        printf("%d is not Armstrong. ", num);
    }

    return 0;
}
