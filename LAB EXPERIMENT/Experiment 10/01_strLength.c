#include <stdio.h>
#include <string.h>
int main()
{
    char name[10];
    gets(name);
    printf("String : %s\n", name);

    printf("Lengths : %d", strlen(name));

    return 0;
}
