#include <stdio.h>

int main()
{
    float r, PI, area, circumference;
    PI = 3.14;
    printf("Enter Radius of Circle :");
    scanf("%f", &r);

    area = PI * r * r;
    circumference = 2 * PI * r;

    printf("Area : %.2f\n", area);
    printf("Circumference : %.2f\n", circumference);

    return 0;
}
