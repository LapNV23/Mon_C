#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num1;
	int num2=0;
	do
	{
		printf("\nEnter a number:");
		scanf("%d", &num1);
		printf("No. is %d, num1");
		num2++;
	}
	while (num1 != 0);
	printf("\nThe total number entered were %d", --num2);
	/* num2 is decremented before printing because count for last integer (0) is not to be considered */
}
