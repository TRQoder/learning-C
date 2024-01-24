#include <stdio.h>
int main()
{
    int num, ld, sum = 0;
    printf("Enter a  number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        ld = num % 10;
        sum = sum + ld;
        num = num / 10;
    }
    printf("Sum of Digits : %d",sum);
    

    return 0;
}
