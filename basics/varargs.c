#include <stdio.h>
#include <stdarg.h>
int sum(char *, ...);
int main()
{
    sum("rayon", 2, 3.3, 'f');
}

int sum(char *str, ...)
{
    va_list list;
    va_start(list, 3);
    int a = va_arg(list, int);
    double b = va_arg(list, double);
    char c = va_arg(list, int);
    printf("%d %lf %c \n", a, b, c);
    printf("%s\n", str);
    va_end(list);
    return 0;
}