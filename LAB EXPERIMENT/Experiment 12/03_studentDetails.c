#include <stdio.h>
typedef struct class
{
    char name[30];
    int rollNo;
    char dob[15];
    int fees;
} class;
int main()
{
    int n = 5;
    class student[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Details of Student %d\n", i + 1);
        printf("Name : ");
        gets(student[i].name);
        printf("Roll No. : ");
        scanf("%d", &student[i].rollNo);
        getchar();
        printf("Date Of Birth : ");
        gets(student[i].dob);
        printf("Fees : ");
        scanf("%d", &student[i].fees);
        getchar();
        printf("_____________________________________\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("_____________________________________\n");
        printf("Details of Student %d\n", i + 1);
        printf("Name : %s\n", student[i].name);
        printf("Roll No. : %d\n", student[i].rollNo);
        printf("Date Of Birth : %s\n", student[i].dob);
        printf("Fees : %d\n", student[i].fees);
    }

    return 0;
}
