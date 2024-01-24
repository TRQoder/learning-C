#include <stdio.h>
int main()
{
    double disInKm;
    printf("Enter Distance in Kilometers : ");
    scanf("%lf", &disInKm);

    double disInCm = disInKm * 100000;
    double disInFeet = disInKm * 3280.84;
    double disInInch = disInKm * 39370.1;
    double disInMeter = disInKm * 1000;

    printf("Distance in Centimeters : %.2lf cm\n", disInCm);
    printf("Distance in Feet : %.2lf feet\n", disInFeet);
    printf("Distance in Inch : %.2lf inch\n", disInInch);
    printf("Distance in Meter : %.2lf meters\n", disInMeter);

    return 0;
}
