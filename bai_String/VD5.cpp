#include <stdio.h>
#include <string.h>

main()
{
	char hotelname1[15] = "Sea View";
	char hotelname2[15] = "Sea Breeze";
	char getch();
	printf("The old name is %s\n", hotelname1);
	
	strcpy(hotelname1, hotelname2);
	/* Changes the hotel name */
	
	printf("The new name is %s\n", hotelname1);
	/* Display the new name*/
	
	getch();
}

