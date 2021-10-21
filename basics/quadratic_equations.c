#include <stdio.h>
#include <math.h>

int main()
{
    //take input a,b,c
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    //find determinant
    double determinant = b * b - 4 * a * c;

    //find roots
    if (determinant >= 0)
    {
        //real roots
        double root1 = (-b + sqrt(determinant)) / (2 * a);
        double root2 = (-b - sqrt(determinant)) / (2 * a);
        printf("the roots are %lf , %lf \n", root1, root2);
    }
    else
    {
        //imaginary roots
        double imaginary_part = sqrt(-determinant) / (2 * a);
        double real_part = -b / (2 * a);

        printf("the roots are %lf-%lfi ,%lf+%lfi \n", real_part, imaginary_part, real_part, imaginary_part);
    }
    return 0;
}