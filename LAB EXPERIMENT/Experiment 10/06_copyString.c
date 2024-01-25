#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    printf("Enter a string : ");
    
    gets(string);
    printf("String : %s\n", string);

    char string2[100];
    strcpy(string2,string);
    printf("Copied String : %s\n", string2);
    return 0;
}
