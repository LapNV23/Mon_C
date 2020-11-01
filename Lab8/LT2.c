#include <stdio.h>
#include <stdlib.h>

void main()

{
	int i;
	char name[10];
	char ans;
	
	printf("What your name?\n");
	scanf("%s", &name);
	
	for(i = 1; i <= 100; i++)
	{
		printf(" Fall in love %d\n", i);
	}
	do
	{
		ans = getchar();
		
		printf("Do you love me?\n");
		printf("Yes or No:\n");
		scanf("%c", &ans);
	}while(ans != 'y');
    
    int a, b, size = 15;
    for (a = size/2; a <= size; a = a+2)
    {
        for (b = 1; b < size-a; b = b+2)
        printf(" ");

        for (b = 1; b <= a; b++)
        printf("*");

        for (b = 1; b <= size-a; b++)
        printf(" ");

        for (b = 1; b <= a-1; b++)
        printf("*");
     }
}
