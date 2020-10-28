#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i, j, k;
	int m, n, o;
	printf("Nhap 1 so: ");
	scanf("%d", &i);
	printf("\n");
	printf("a:\n");
	
	
	for(j = i; j>= 0; j--)
	{
		printf("\n");
		for(k = 0; k <= j; k++)
		{
			printf("%d", k+1);
		}
	}
	
	printf("Nhap 1 so:");
	scanf("%d", &m);
	printf("b:\n");
	
	for(n = m; n <= m; n++)
	{
		printf("\n");
		for(o = 0; o <= n; o++)
		{
			printf("%d", o++);
		}
	}
}
