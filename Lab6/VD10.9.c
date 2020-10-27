#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num;
	labe11:
	printf("\nEnter a number (1): ");
	scanf("%d", &num);
	if(num == 1)
	goto Test;
	else
	goto labe11;
	Test:
	printf("All done...");
}
