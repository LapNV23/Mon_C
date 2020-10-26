#include <stdio.h>
void main()
{
	int Num1;
	int Num2;
	int Num3;
	printf("Nhap so thu nhat:");
	scanf("%d", &Num1);
	printf("Nhap so thu hai:");
	scanf("%d", &Num2);
	printf("Nhap so thu ba:");
	scanf("%d", &Num3);
	
	if(Num1 >= Num2 && Num1 >=Num3)
	{
		printf("So lon nhat la:%d", Num1);
	}
	else if(Num2 >= Num1 && Num2 >= Num3)
	{
		printf("So lon nhat la:%d", Num2);
	}
	else
	{
		printf("So lon nhat la:%d", Num3);
	}
	return 0;
}
