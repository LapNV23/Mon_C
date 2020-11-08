#include <stdio.h>
#include <stdlib.h>

int Say();
void Break();
void Love();
int thuc_te(int age, int hight, int weight, int ans);
int tieu_chuan(int age, int hight, int weight, int ans);

int thuc_te(int age, int hight, int weight, int ans){
	int dieu_kien;

	printf("Tuoi:\n");
	scanf("%d", &age);
	printf("Chieu cao:\n");
	scanf("%d", &hight);
	printf("Can nang:\n");
	scanf("%d", weight);
	printf("Bo em la?\n");
	scanf("%s", &ans);
	
    return dieu_kien;
}

int tieu_chuan(int age, int hight, int weight, int ans){
	
	if(age > 16 && age < 20 && hight > 152 && weight > 40 && weight < 60 )
	{
		Say();
	}
	else
	{
		printf("Chuc ban may man lan sau.");
	}
}

int Say(){
	char Rep;
	printf("Do you love me?\n");
	printf("Cau tra loi cua ban la:(Y/N)\n");
	scanf("%c", &Rep);
	if(Rep == 'Y')
	{
		Love();
	}
	else
	{
		Break();
	}
}

void Break(){
	printf("Dad does not love to return sandals. ok");
}

void Love(){
	printf("Thank you for agreeing. I promise to love you to the best");
}
