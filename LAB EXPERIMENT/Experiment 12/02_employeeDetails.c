#include <stdio.h>
#include <string.h>
typedef struct employeesDetails
{
    char memberID[15];
    char name[25];
    int salary;
    char address[100];
} employeeDetails;

int main()
{
    printf("Enter  the number of Employees : ");
    int n;
    scanf("%d", &n);
    getchar();

    employeeDetails employee[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the Details of Employee %d\n\n\n", i + 1);
        printf("Name : ");
        gets(employee[i].name);
        printf("Member id : ");
        gets(employee[i].memberID);
        printf("Salary : ");
        scanf("%d", &employee[i].salary);
        getchar();
        printf("Address : ");
        gets(employee[i].address);
    }

    for (int i = 0; i < n; i++)
    {
        printf("________________________________________________\n");
        printf("Details of Employee %d\n\n\n", i + 1);
        printf("Name : %s\n", employee[i].name);
        printf("Member ID : %s\n", employee[i].memberID);
        printf("Salary : %d\n", employee[i].salary);
        printf("Address : %s\n\n\n", employee[i].address);
    }

    return 0;
}
