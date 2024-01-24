#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, s, area;
    printf("Enter the first side of Triangle :");
    scanf("%lf", &a);
    printf("Enter the second side of Triangle :");
    scanf("%lf", &b);
    printf("Enter the third side of Triangle :");
    scanf("%lf", &c);

    s = (a + b + c) / 2;

    if (a + b > c && b + c > a && a + c > b)
    {
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area : %.2lf", area);
    }
    else
    {
        printf("Enter valid sides of Triangle\n");
    }

        return 0;
}
