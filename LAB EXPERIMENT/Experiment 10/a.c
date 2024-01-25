#include<stdio.h>

int main(){
    char str[] ="GPT";
    char *ptr = str;
    printf("%c\n",*ptr++);
    printf("%c\n",*ptr);
    printf("%c\n",(*ptr)++);
    printf("%c\n",*ptr);
    
    
    
     return 0;
}
