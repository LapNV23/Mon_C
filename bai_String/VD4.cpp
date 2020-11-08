#include <stdio.h>
#include <string.h>

void main(A)
{
	int getch();
	char str1[15] = "New York";
	char str2[15] = "Washington";
	char chr ='a', *loc;
	
	loc = strchr(str1, chr);
	/* checks for the occurrence of the character value help by chr in the first city name */
	    if(loc!= NULL)
	    printf("%c occurs in %s\n", chr, str1);
	    else
	    printf("%c does not occur in %s\n", chr, str1);
	    
	    loc = strchr(str2, chr);
	    /* checks for the occurrence of the character value help by chr in the first city name */
	    if(loc!= NULL)
	    printf("%c occurs in %s\n", chr, str2);
	    else
	    printf("%c does not occur in %s\n", chr, str2);
	    
	    getch();
}

