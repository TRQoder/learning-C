#include <stdio.h>

int main()
{
    float l,b,area,perimeter;
    printf("Enter length of Rectangle :");
    scanf("%f", &l);
    printf("Enter breadth of Rectangle :");
    scanf("%f", &b);

    area = l*b;
    perimeter = 2 * (l + b);

    printf("Area : %.2f\n", area);
    printf("Perimeter : %.2f\n", perimeter);
     
    return 0;
}
