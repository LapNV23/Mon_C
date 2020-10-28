#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num, i;
	printf("Nhap bang cuu chuong ban muon tim:");
	scanf("%d", &num);
	
	for(i = 1; i <= 10; i++)
	{
		printf(" %d * %d = %d\n", num, i, num * i);
	}
}
