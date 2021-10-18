#include <stdio.h>

int main()
{
    char character1 = 'A', character2 = 66;
    printf("%c %c\n", character1, character2);

    short shortInteger = 88;
    unsigned short signedShort = 99;
    printf("%d %u\n", shortInteger, signedShort);

    int integer = 98;
    unsigned int unint = 22;
    printf("%d %u\n", integer, unint);

    long longInteger = 23;
    signed long longInteger2 = 32;
    printf("%ld %ld\n", longInteger, longInteger2);

    long long longlong = 23;
    printf("%lld\n", longlong);
    float firstFloat = 22.2;

    double firstDouble = 23.33;
    long double longdouble = 22.22;
    printf("%f %lf %Lf\n", firstFloat, firstDouble, longdouble);
    return 0;
}