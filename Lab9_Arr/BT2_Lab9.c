#include <stdio.h>
#include <stdlib.h>

void main()

{
	int arr[5], i;
	float arr1[10];
	
	for(i = 0; i <= 4; i++)
	{
		scanf("%d", &arr[i]);
		arr1[i] = arr[i];
	}
	
	for(i = 5; i <= 9;i++)
	{
		arr1[i] = 0;
	}
	for(i = 0; i <= 9; i++)
	{
		printf("%f\n", arr1[i]);
	}
}
