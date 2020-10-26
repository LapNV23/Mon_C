#include <stdio.h>
void main()

{
	int Num1;
	int Num2;
	int Hieu_2_so;
	printf("Nhap Num1\n");
	scanf("%d", &Num1);
	printf("Nhap Num2\n");
	scanf("%d", &Num2);
	Hieu_2_so = Num1 - Num2;
	
	printf("Hieu 2 so = %d", Num1 - Num2);
	
	if(Hieu_2_so == Num1 || Hieu_2_so == Num2)
	{
		printf("\nHieu 2 so bang 1 trong 2 gia tri da nhap:");
	}
	else
	{
		printf("\nHieu 2 so khong bang bat ki gia tri nao da nhap");
	}
	return 0;
}
