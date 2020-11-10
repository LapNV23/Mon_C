#include <stdio.h>
#include <stdlib.h>

int So_Du_Ban_Dau = 300;
int Login(int username, int password);
int Menu();
int Withdraw(int Num);
int Transfer(int id, int Num);
int Check();
int Exit();
int Continue(int y);

int main()
{
	int username, password, isLogin;
	int So_Du_Ban_Dau = 300;
	char ans;
	
	printf("----------Welcome to ATM_Bank----------\n");
	
	printf("Enter username: \n");
	scanf("%d", &username);
	printf("Enter password: \n");
	scanf("%d", &password);
	
	isLogin = Login(username,password);
	
	if(isLogin == 1)
	{
		//neu dang nhap thanh cong:
		do
	    {
	    	Menu();
	    	printf("Ban co muon giao dich tiep khong?\nYes or No:\n");
	        fflush(stdin);
            scanf("%c", &ans);
		 }
		while(ans == 'y');
		printf("Cam on quy khach da su dung dich vu. Hen gap lai.");
	} else
	{
		//Neu dang nhap KHONG thanh cong"
		printf("Username or Password sai.Ket thuc giao dich");
	}
	
    return 0;
}

/* Login*/

int Login(int username, int password)
{
	if(username == 1111 && password == 2222)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

/* Menu */
int Menu(){
	int Lua_chon, Num, id;
	char ans;
	
	printf("Chuc Nang:\n1.Withdraw \n2.Transfer \n3.Check \n4.Exit.\n");
	scanf("%d", &Lua_chon);
	switch(Lua_chon)
	{
		case 1:
			Withdraw(Num);
		    break;
		
		case 2:
			Transfer(id,Num);
			break;
		
		case 3:
			Check();
			break;
		
		case 4:
			Exit();
	        break;
	}
}

/* Withdraw */

int Withdraw(int Num){
	
	printf("Nhap so tien ban muon rut:\n");
	scanf("%d", &Num);
	
    if(Num % 50 == 0 && Num <= 3000000 && Num <= So_Du_Ban_Dau)
	{
		printf("Rut tien thanh cong.\nSo du con lai la: %d\n", So_Du_Ban_Dau - Num);
	}
	else
	{
		printf("So tien khong hop le\n. Ket thuc giao dich.\n");
	}
}

/* Transfer */

int Transfer(int id, int Num){
	
	printf("Nhap stk ban muon chuyen tien:");
	scanf("%d", &id);
	
	printf("Nhap so tien ban muon chuyen:");
	scanf("%d", &Num);
	
	if(Num < So_Du_Ban_Dau)
	{
		printf("Giao dich thanh cong. So du con lai la: %d\n", So_Du_Ban_Dau - Num);
	}
	else
	{
		printf("So tien khong hop le. Ket thuc giao dich.\n");
	}
}

/* Check */

int Check(){
	printf("So du hien tai la: %d", So_Du_Ban_Dau);
}

/* Exit */

int Exit(){
	printf("Ket thuc giao dich.");
}

