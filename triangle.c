#include <stdio.h>

int main()
{
    // variable declaration
    double A, B, C;
    // take Input
    scanf("%lf %lf %lf", &A, &B, &C);
    // check condtion for creating a triangle
    if ((A + B > C) && (A + C > B) && (B + C > A))
    {
        // print the Perimetro of triangle
        printf("Perimetro = %.1lf\n", (A + B + C));
    }
    else
    {
        // print the area of trapizium
        printf("Area = %.1lf\n", (A + B) * C / 2);
    }
}