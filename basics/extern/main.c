#include <stdio.h>
#include "first.c"

extern int sum(int, int);

int main()
{
    printf("%d\n", sum(3, 4));
    return 0;
}