#include <stdio.h>
#include <stdio.h>

main()
{
	char lines[5][20];
	int ctr, longctr = 0;
	
	int longest(char lines_arr[][20]);
	/* Function declaration */
	
  for(ctr = 0; ctr < 5; ctr++)
  /* Accepts string values into the array */
  {
  	printf("\nEnter string %d:", ctr + 1);
  	scanf("%s", lines[ctr]);
  }
  longctr = longest(lines);
  /* Passes the array to the function */
  
  printf("\nThe longest string is %s", lines[longctr]);
}

int longest(char lines_arr[][20]) /* Function definition */
{
	int i = 0, l_ctr = 0, prev_len, new_len;
	
	prev_len = strlen(lines_arr[i]);
	/* Determines the length of the first element */
	
	for(i++; i < 5; i++)
	{
		new_len = strlen(lines_arr[i]);
		l_ctr = i;
		/* Stores the subscript of the longer string */
		prev_len = new_len;
	}
	retunrn l_ctr;
	/* Returns the subscript of the longest string */
}

