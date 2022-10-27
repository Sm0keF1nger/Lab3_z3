#include <stdio.h>
#include<math.h>

int main()
{
    double a, x, y, z;
    printf("x = ");
    scanf_s("%lf", &x);

    printf("y = ");
    scanf_s("%lf", &y);

    printf("z = ");
    scanf_s("%lf", &z);
    

    if ((pow(z, x * (-1) - 2) + (1 / pow(x, 2) + 4)) != 0) {
        a = (1 + y) * ((x + (y / pow(x, 2) + 4)) / (pow(z, x * (-1) - 2) + (1 / pow(x, 2) + 4)));
        printf("a = (1 + y) * ((x + (y / x^2 + 4)) / z^-x-2 + (1 / x^2 + 4)))\n  result = %.2lf", a);
    }
    else {
        printf("impossible to count");
    }


}
