#include <stdio.h>
#include <stdlib.h>

int *sub_array(int, int, int *);
int main()
{

	//printing

	//printf("hello world\n");

	//1D arrays

	int arr[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; //rest are zero

	// printf("%ld\n",sizeof(arr));
	// printf("%ld\n",sizeof(arr[0]));
	// printf("%ld\n",sizeof(arr)/sizeof(arr[0]));

	//traversing

	//  for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
	// 	printf("%d\n",arr[i]);
	//  }

	//subarray
	int *sub = sub_array(2, 7, arr);
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", sub[i]);
	}
}
int *sub_array(int start, int end, int *arr)
{
	int *new = (int *)malloc(sizeof(int) * (end - start));
	//error was that sizeof(ptr) always gives 8 by as that of array gives whole
	for (int i = 0; start < end; start++)
	{
		new[i] = arr[start];
		i++;
	}
	return new;
}
