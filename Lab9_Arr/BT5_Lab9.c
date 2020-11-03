#include <stdio.h>
#include <stdlib.h>

void main()
{
	int arr1[4], Diem, i;
	char arr2[30];
	
	for(i = 0; i < 30; i++)
	{
		scanf("%s", &arr2[i]);
		for(i = 1;i <= 4; i++)
		{
			printf("Mon thu %d\n", i);
			fflush(stdin);
			scanf("%d", &Diem);
		}
	}
}
