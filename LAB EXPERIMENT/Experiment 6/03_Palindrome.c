#include <stdio.h>
int main()
{
    int n, num, ld, rev = 0;
    printf("Enter a  number : ");
    scanf("%d", &n);
    num = n;

    while (n > 0)
    {
        ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }
    if (num == rev)
    {
        printf("%d is Palindrome. ", num);
    }
    else
    {
        printf("%d is not Palindrome. ", num);
    }

    return 0;
}
