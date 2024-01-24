#include <stdio.h>
int main()
{
    int n;
    float sum = 0;
    printf("Enter n : ");
    scanf("%d", &n);

    for (float i = 1; i <= n; i++)
    {
        sum = sum + i / (i+1);
    }

    printf("Sum : %.2f", sum);

    return 0;
}
