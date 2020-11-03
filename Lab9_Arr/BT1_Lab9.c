#include <stdio.h>
#include <stdlib.h>

void main()

{
	int arr[10], i;
	printf("Nhap so:\n");
	for(i = 1; i < 10; i++)
    scanf("%d", &arr[i]);
	
	for(i = 1; i< 10; i+=2)
	{
		printf("\n%d", arr[i]);
	}
	
}
