#include <stdio.h>
void main()

{
	int Num1;
	int Num2;
	int Tich_hai_so;
	printf(" Nhap so thu nhat ");
	scanf("%d", &Num1);
	printf(" Nhap so thu hai ");
	scanf("%d", &Num2);
	Tich_hai_so = Num1 *Num2;
	
	printf("Tich hai so = %d", Num1 * Num2);
	
	if(Tich_hai_so >= 1000 || Tich_hai_so == 1000)
	{
		if(Tich_hai_so >= 1000)
		{
			printf("\n Tich hai so > 1000");
		}
		else
		{
			printf("\n Tich hai so = 1000");
		}
	}
	else
	{
		printf("\n Tich hai so < 1000");
	}
}
