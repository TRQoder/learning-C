#include <stdio.h>
#include <string.h>
int main()
{
    char string1[100];
    printf("Enter a String : ");

    gets(string1);

    char string2[100];
    printf("Enter another String : ");
    gets(string2);
    printf("First String : %s\n", string1);
    printf("Second String : %s\n", string2);

    printf("Compare : %d\n", strcmp(string1, string2));
    // 0 when both strings are equal...

    return 0;
}
