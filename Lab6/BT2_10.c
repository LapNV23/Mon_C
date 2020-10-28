#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i, j, k;
	printf("Nhap so:");
	scanf("%d", &i);
	
	for(j = 1; j <= i; j++)
	{
		printf("\n");
		for(k = 1; k <= j; k++)
		{
		    printf("%d", k);	
		}
	} 
}
