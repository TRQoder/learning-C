#include <stdio.h>
#include <ctype.h> // for tolower
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    // convert to lowercase to handle both Lower and Uppercase vowels...

    ch = tolower(ch);

    switch (ch)
    {
    case 'a':
        printf("%c is a vowel.", ch);
        break;
    case 'e':
        printf("%c is a vowel.", ch);
        break;
    case 'i':
        printf("%c is a vowel.", ch);
        break;
    case 'o':
        printf("%c is a vowel.", ch);
        break;
    case 'u':
        printf("%c is a vowel.", ch);
        break;

    default:
        printf("%c is Not a vowel.", ch);
    }

    return 0;
}
