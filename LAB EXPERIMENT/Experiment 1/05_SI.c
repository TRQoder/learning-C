#include <stdio.h>

int main()
{
    int p, t;
    float r, SI;
    printf("Enter  Principal amount : $");
    scanf("%d", &p);
    printf("Enter Rate of interest :");
    scanf("%f", &r);
    printf("Enter Time (In Years):");
    scanf("%d", &t);

    SI = (p * r * t) / 100;

    printf("Simple interest : $%.2f", SI);

    return 0;
}
