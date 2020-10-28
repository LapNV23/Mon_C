#include <stdio.h>
#include <stdlib.h>

void main()
{
	char name[10];
	int age, i;
	
	printf("Ten cua ban la: ");
	scanf("%s", name);
	printf("Tuoi cua ban la: ");
	scanf("%d", &age);
	
	for(i = 1; i <= age; i++)
	{
		printf("Chao %s lan %d\n", name, i);
	}
}
