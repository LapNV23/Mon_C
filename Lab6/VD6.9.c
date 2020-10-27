#include <stdio.h>
#include <stdlib.h>

void main()
{
	int count=0;
	while(count<100)
	{
		printf("This goes on forever, HELP!!!\n");
		count +=10;
		printf("\n%d", count);
		count-=10;
		printf("\n%d", count);
		printf("\Ctrl -C will help");
	}
}
