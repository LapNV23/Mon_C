#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i, j, k;
	printf("Enter no. of rows: ");
	scanf("%d", &i);
	printf("\n");
	
	for(j = i; j >= 0; j--)
	{
		printf("\n");
		for(k = 1; k <= j; k++)
		{
			printf("*");
		}
	}
}
