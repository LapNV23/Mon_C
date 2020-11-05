#include <stdio.h>
#include <stdlib.h>

void menu(){
    int a=0,b=0,kt=1;
    while (kt==1) {
        printf("\nTinh Toan\n");
        printf("=========================\n");
        printf("1. Nhap so\n");\
         printf("2. Tinh Tong\n");
        printf("3. Tinh hieu\n");
        printf("4. Tinh tich\n");
        printf("5. Tinh Thuong\n");
        printf("6. Exit\n");
        printf("==========================\n");
        printf("Ch?n:\t");
        int bien;
        scanf("%d", &bien);
        if (bien==1) {
        	printf("Nhap gia tri a= ");
            scanf("%d", &a);
            printf("Nhap gia tri b= ");
            scanf("%d", &b);
        }
        if (bien==2) {
            printf("Tong= %d\n", a+b);
        }
        if (bien==3) {
            printf("Hieu= %d\n", a-b);
        }
        if (bien==4) {
            printf("Tich= %d\n", a*b);
        }
        if (bien==5) {
            if (b==0) {
                printf("Loi");
            }
            else
                printf("Thuong= %lf\n", (double)a/b);
        }
        if (bien==6) {
            printf("Ket Thuc\n");
            kt=0;
        }
    }
    }
int main(){
    menu();
}
