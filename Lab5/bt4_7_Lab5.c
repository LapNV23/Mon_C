#include <stdio.h>
void main()

{
	int Muc_luong;
	int Lua_chon;
	int Loai_A=300;
	int Loai_B=250;
	int Loai_Khac=100;
	
	printf("Muc luong cua nhan vien la ");
	scanf("%d", &Muc_luong);
	printf("1.Loai_A:\n 2.Loai_B:\n3.Loai_Khac:\n");
	scanf("%d", &Lua_chon);
	
	if(Lua_chon == 1)
	{
		printf("Tong tien luong la: %d", Muc_luong + Loai_A);
	}
	else if(Lua_chon == 2)
	{
		printf("Tong tien luong la: %d", Muc_luong + Loai_B);
	}
	else
	{
		printf("Tong tien luong la: %d", Muc_luong + Loai_Khac);
	}
}
