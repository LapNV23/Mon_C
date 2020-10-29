#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num1, num2, i, sum = 0;
	printf("So dau la: ");
	scanf("%d", &num1);
	printf("So cuoi la: ");
	scanf("%d", &num2);
	
	for(i = num1; i <= num2; i++)
	{
		if(i % 2 != 0)
		{
			sum = sum + i;
		}
	}
	printf(" Tong so le la: %d", sum);
}
