#include <stdio.h>
void main()

{
	int Diem_xep_loai;
	printf(" Nhap diem Enter Choice (1 - 100)\n ");
	scanf("%d", &Diem_xep_loai);
	
	if(Diem_xep_loai >= 75 || Diem_xep_loai == 75)
	{
		printf("\nLoai A");
	}
	else if(Diem_xep_loai >= 60 && Diem_xep_loai <= 75 || Diem_xep_loai == 60)
	{
		printf("\nLoai B");
	}
	else if(Diem_xep_loai >= 45 && Diem_xep_loai <= 60 || Diem_xep_loai == 45)
	{
		printf("\nLoai C");
	}
	else if(Diem_xep_loai >= 35 && Diem_xep_loai <= 45 || Diem_xep_loai == 35)
	{
		printf("\nLoai D");
	}
	else if(Diem_xep_loai <= 35)
	{
		printf("\nLoai E");
	}
	else
	{
		printf("\nKhong co ket qua");
	}
	return 0;
}
