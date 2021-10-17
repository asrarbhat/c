//given an array of birthdays check if there is a match
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    char arr[n][9];

    for (int i = 0; i < n; i++)
        scanf("%s", arr[i]);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);

    int birthday[373];

    for (int i = 0; i < n; i++)
    {
        char month[] = {arr[i][3], arr[i][4]};
        char date[] = {arr[i][0], arr[i][1]};
        int day = ((atoi(month) - 1) * 31) + atoi(date);
        if (birthday[day] == 1)
        {
            printf("%s\n", arr[i]);
            break;
        }
        else
        {
            birthday[day] == 1;
        }
    }

    return 0;
}