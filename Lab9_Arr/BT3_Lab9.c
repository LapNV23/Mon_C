#include <stdio.h>
#include <stdlib.h>

void main()

{
	int arr[10], i, sum = 0, avg, min, max;
	int count1 = 0, count2 = 0;
	
	printf("Nhap 10 gia tri:\n");
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	
	printf("Tong gia tri cac phan tu la: %d\n", sum);
	avg = sum / 10;
	printf("Trung binh cong cac phan tu la:%d\n", avg);
	
	max = arr[0];
	min = arr[0];
	for(i = 0; i < 10; i++)
	{
		if(max <= arr[i])
		{
			max = arr[i];
		}
		if(min >= arr[i])
		{
			min = arr[i];
		}
	}
	printf("So lon nhat la: %d\n", max);
	printf("so be nhat la: %d\n", min);
	
	for(i = 0; i < 10; i++)
	{
		if(arr[i] == max)
		{
			count1 += 1;
		}
		if(arr[i] == min)
		{
			count2 += 1;
		}
	}
	printf("Gia tri lon nhat xuat hien %d lan.\n", count1);
	printf("Gia tri nho nhat xuat hien %d lan.\n", count2);
}
