#include <stdio.h>
void main()
{
	int x;
	int y;
	int num;
	num = x= y;
	printf(" x la:");
	scanf("%d", &x);
	printf(" y la:");
	scanf("%d", &y);
	printf("num la:");
	scanf("%d", &num);
	
	if(num >= 2000 && num <= 3000)
	{
		printf("Ket qua la:", x);
	}
	else if(num >= 100 && num <= 500)
	{
		printf("Ket qua la:%d", y);
	}
	else
	{
		printf("Khong co ket qua");
	}
}
