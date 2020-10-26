#include <stdio.h>
void main()

{
	int So_du=300;
	int Phi_giao_dich=5;
	
	printf("Welcom\n");
	int ma_the;
	printf("nhap ma the: ");
	scanf("%d", &ma_the);
	int ma_pin;
	printf("nhap ma pin: ");
	scanf("%d", &ma_pin);
	
	if(ma_the == 1234 && ma_pin == 1111)
	   {
	   	  printf("So the va so pin hop le:\n");
	   	  
	   	  int Rut_tien;
	   	  int Doi_ma_pin;
	   	  int lua_chon;
	   	  
	      printf(" 1 Rut_tien:\n 2 Chuyen_khoan:\n 3 Kiem_tra_so_du:\n 4 Exit:\n ");
	      scanf("%d", &lua_chon);
	      
	      if(lua_chon == 1)
	      {
	      	    printf("So du hien co la:%d", So_du);
	      		int Num;
	      		printf("Nhap so tien muon rut");
		      	scanf("%d", &Num);
		      	if(Num >= 0 && Num <= 300)
		      	    {
		      	    printf("Thanh cong. So du con lai sau khi rut la %d", So_du - Num - Phi_giao_dich);
		      	    }
		      	else
		      	    {
		      		printf("So tien muon rut khong hop le.\n Ket thuc giao dich.");
				     }
		  }
		  else if(lua_chon == 2)
		  {
		  	int So_tai_khoan;
		  	printf("So tai khoan muon chuyen tien la:");
		  	scanf("%d", &So_tai_khoan);
		  	int So_tien_muon_chuyen;
		  	printf("So tien muon chuyen la:");
		  	scanf("%d", &So_tien_muon_chuyen);
		  	if(So_tien_muon_chuyen <= So_du)
		  	    {
		  		printf("\nSo du con lai la:%d", So_du - So_tien_muon_chuyen);
			    }
			else
		         {
			    	printf("\nKet thuc giao dich. Do so du khong du.");
			     }
		  }
		  else if(lua_chon == 3)
		  {
		  	printf("So du la:%d", So_du);
		  }
		  else
		  {
		  	printf("Ket thuc giao dich.");
		  }
	  }
	else
	 {
	 printf("Ma the or Ma pin khong ton tai.\n Ket thuc giao dich.");
     }
}
