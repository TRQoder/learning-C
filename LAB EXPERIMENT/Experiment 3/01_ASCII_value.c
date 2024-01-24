//To do --> Adjust for \0
#include <stdio.h>
int main()
{
    char userInput;
    printf("Enter a character : \n");
    scanf("%c", &userInput);

    printf("ASCII value of %c is %d ", userInput, userInput);

    return 0;
}
