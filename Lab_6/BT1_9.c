#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num1, num2, i;
	num1 = 100;
	num2 = 5;
	for(i = num1; i >= 5; i--)
	{
		if(i % 5 == 0)
		printf("%d,", i);
	}
}
