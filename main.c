#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    float x1, x2;

    printf("Write the equation values separated by spaces: ");
    scanf("%i %i %i", &a, &b, &c);

    if (a == 0)
    {
        printf("You can't set a to zero\n\n");
        exit(1);
    }

    d = sqrt((b * b) - (4 * a * c));

    if (d < 0)
    {
        printf("\nd is lesser than 0; no real roots\n\n");
    }
    else if (d == 0)
    {
        x1 = x2 = -b / (2 * a);

        printf("\nd is equals to 0, the roots has the same value\n\n");
        printf("x1 = x2 = %d\n\n", x1);
    }
    else
    {
        x1 = (-b + d) / (2 * a);
        x2 = (-b - d) / (2 * a);

        printf("\nd is greater than 0, the roots has different values\n\n");
        printf("x1 = %f\nx2 = %f\n\n", x1, x2);
    }

    return 0;
}