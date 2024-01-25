#include <stdio.h>
int main()
{
    float r, PI = 3.14, area, circumference;

    printf("Enter radius of the Circle : ");
    scanf("%f", &r);

    float *ptrR = &r;
    float *ptrPI = &PI;
    float *ptrA = &area;
    float *ptrC = &circumference;

    *ptrA = *ptrPI * (*ptrR) * (*ptrR);
    *ptrC = 2 * (*ptrPI) * (*ptrR);

    printf("Area : %.2f\n", *ptrA);
    printf("Circumference : %.2f", *ptrC);

    return 0;
}
