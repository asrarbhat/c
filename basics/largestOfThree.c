#include <stdio.h>

int main()
{
    //take three inputs from console into three variables
    int firstNumber, secondNumber, thirdNumber;
    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    //find maximum of three numbers and print it
    if (firstNumber > secondNumber)
    {
        if (firstNumber > thirdNumber)
        {
            printf("%d is the biggest of three\n", firstNumber);
        }
        else
        {
            printf("%d is the biggest of three\n", thirdNumber);
        }
    }
    else
    {
        if (secondNumber > thirdNumber)
        {
            printf("%d is the biggest of three\n", secondNumber);
        }
        else
        {
            printf("%d is the biggest of three\n", thirdNumber);
        }
    }

    return 0;
}