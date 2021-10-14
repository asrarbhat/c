// given an array A of size N and a number S find the subarray such that the sum of sub-array is equal to S, sub-array from A should be continuous,and you are supposed to return the index of first and last in one based index.

#include <stdio.h>

void subarr(int[], int, int);

int main()
{
    int N = 0;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    int S = 0;
    scanf("%d", &S);

    subarr(arr, N, S);
}

void subarr(int arr[], int N, int S)
{
    int firstIndex = 1;
    int sum = 0;

    for (int i = 0; i <= N; i++)
    {
        if (sum == S)
        {
            printf("%d %d \n", firstIndex, i);
            return;
        }
        else if (sum > S)
        {
            sum -= arr[firstIndex];
            firstIndex++;
            i -= 1;
        }
        else
        {
            if (i == N)
                break;
            sum += arr[i];
        }
    }
    printf("-1\n");
}