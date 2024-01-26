#include <stdio.h>
#include <math.h>
int main()
{
     double a, b, c, D, r1, r2;
     printf("Quadratic equation : ax^2 + bx + c =0 \nwhere a !=0\n");

     printf("Enter the coefficient of x^2 : ");
     scanf("%lf", &a);
     printf("Enter the coefficient of x : ");
     scanf("%lf", &b);
     printf("Enter the constant term : ");
     scanf("%lf", &c);

     D = b * b - (4 * a * c);

     r1 = (-b + sqrt(D)) / (2 * a);
     r2 = (-b - sqrt(D)) / (2 * a);

     if (D > 0)
     {
          printf("Roots are Real and Different \n");
          printf("Root 1 = %.2lf\n", r1);
          printf("Root 2 = %.2lf\n", r2);
     }
     else if (D == 0)
     {
          printf("Both Roots are equal : %.2lf \n", r1);
     }
     else
     {
          printf("Imaginary Roots : ");
          double realPart = -b / (2 * a);
          double imaginaryPart = sqrt(-D) / (2 * a);
          printf("Roots are complex and Different \n");
          printf("Root 1 = %.2lf + %.2lf i\n", realPart, imaginaryPart);
          printf("Root 2 = %.2lf - %.2lf i\n", realPart, imaginaryPart);
     }

     return 0;
}
