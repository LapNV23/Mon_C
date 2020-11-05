#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void GetArea(int a, int b, int c);

int main()
{
	int a, b, c;
	
	printf("Nhap vao canh a:\n");
	scanf("%d", &a);
	printf("Nhap vao canh b:\n");
	scanf("%d", &b);
	printf("Nhap vao canh c:\n");
	scanf("%d", &c);
	
	GetArea(a, b, c);
}

void GetArea(int a, int b, int c){
	float p, Dien_tich;
	
	p = (a + b + c) / 2;
	Dien_tich = sqrt(p * (p - a) * (p - b) * (p - c));
	
	if( a + b >= c && a + c >= b && b + c >= a)
	{
		printf("Dien tich tam giac la:%.2f", Dien_tich);
	}
	else
	{
		printf(" a, b, c khong phai la 3 canh cua 1 tam giac.");
	}
}
