#include <stdio.h>
#include <stdio.h>


void check(int Num);

int main()
{
	int i, arr[10], Num;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		check(Num);
	}
}

void check(int Num){
	scanf("%d", &Num);
	if(Num % 50 == 0)
	{
		/* Num la boi so cua 50 */
		
		return(0);
	}
	else
	{
		/* Num khong la boi so cua 50 */
		
		return(1);
	}
}

