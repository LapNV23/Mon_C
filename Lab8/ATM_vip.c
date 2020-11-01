#include <stdio.h>
#include <stdlib.h>

void main()

{
	int Ma_the, Ma_pin, count = 0, Ok;
	int Lua_chon, So_du = 300000, Num, So_du_con_lai;
	int So_tai_khoan;
	
	printf("Welcome to Me bank.\n");
	printf("Nhap ma the cua ban:\n");
	scanf("%d", &Ma_the);
	printf("Nhap ma pin cua ban:\n");
    scanf("%d", &Ma_pin);
    if(Ma_pin != 2222)
    {
    	 printf("Ma pin khong chinh xac\n");
    	 count = count +1;
		 printf("Nhap lai ma pin:\n. Lan%d:\n", count);
		 scanf("%d", &Ma_pin);
		 if(Ma_pin == 2222)
	 	{
			printf("Ma pin chinh xac");
		 }
		 else
		 {
			 printf("Ma pin khong chinh xac.\n");    
			 count = count +1;
			 printf("Nhap lai ma pin. Lan %d: \n", count);
			 scanf("%d", &Ma_pin);
			 if(Ma_pin == 2222)
	 	     {
		     	printf("Ma pin chinh xac");
		      }
		    else
		     {
		     	 printf("Ma pin khong chinh xac.\n");    
			     printf("The bi khoa. Vui long lien he ngan hang de duoc giai quyet");
			 }
	     }
    }
	else
	{
		printf("Ma pin chinh xac.");
		printf("Ban muon thuc hien:\n 1.Rut tien\n 2.Hien thi so du\n 3.Chuyen khoan\n 4.Ket thuc\n");
		scanf("%d", &Lua_chon);
		if(Lua_chon == 1)
		{
			printf("So tien muon rut la:\n");
			scanf("%d", &Num);
			if(Num % 50 == 0 && Num <= 500)
			{
				printf("So du con lai la: %d - %d = %d", So_du, Num, So_du_con_lai);
			}
			else
			{
				printf("So du khong phu hop. Ket thuc giao dich.");
			}
			printf("Ban muon thuc hien:\n 1.Rut tien\n 2.Hien thi so du\n 3.Chuyen khoan\n 4.Ket thuc\n");
		}
		
		else if(Lua_chon == 2)
		{
			printf("So du hien co la: %d", So_du);
		}
		
		else if(Lua_chon == 3)
		{
			printf("Nhap so tai khoan muon chuyen tien:\n");
			scanf("%d", &So_tai_khoan);
			printf("So tien muon chuyen:\n");
			scanf("%d", &Num);
			if(Num < So_du)
			{
				printf("Chuyen tien thanh cong.\nSo du con lai la: %d - %d = %d", So_du, Num, So_du_con_lai);
			}
			else
			{
				printf("So tien muon chuyen khong phu hop. Ket thuc giao dich.");
			}
		}
		else if(Lua_chon == 4)
		{
			printf("Ket thuc giao dich.");
		}
	 }
	printf("Ban muon thuc hien:\n 1.Rut tien\n 2.Hien thi so du\n 3.Chuyen khoan\n 4.Ket thuc\n");
	scanf("%d", &Lua_chon);
	if(Lua_chon == 1)
	{
	 	printf("So tien muon rut la:\n");
		scanf("%d", &Num);
		if(Num % 50 == 0 && Num <= 500)
		{
			printf("So du con lai la: %d - %d = %d", So_du, Num, So_du_con_lai);
			}
			else
			{
				printf("So du khong phu hop. Ket thuc giao dich.");
			}
			printf("Ban muon thuc hien:\n 1.Rut tien\n 2.Hien thi so du\n 3.Chuyen khoan\n 4.Ket thuc\n");
		}
		
	else if(Lua_chon == 2)
		{
			printf("So du hien co la: %d", So_du);
	     }
		else if(Lua_chon == 3)
		{
			printf("Nhap so tai khoan muon chuyen tien:\n");
			scanf("%d", &So_tai_khoan);
			printf("So tien muon chuyen:\n");
			scanf("%d", &Num);
			if(Num < So_du)
			{
				printf("Chuyen tien thanh cong.\nSo du con lai la: %d - %d = %d", So_du, Num, So_du_con_lai);
			}
			else
			{
				printf("So tien muon chuyen khong phu hop. Ket thuc giao dich.");
			}
		}
	else if(Lua_chon == 4)
		{
			printf("Ket thuc giao dich.");
		}
}
