#include <stdio.h>
int main()
{
    int num, ld, rev = 0;
    printf("Enter a  number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        ld = num % 10;
        rev = rev * 10 + ld;
        num = num / 10;
    }
    printf("Reverse : %d", rev);

    return 0;
}
