#include "main.h"
/**
 *times_table - start of this function
 */

void times_table(void)
{
	 int r,c;


	 for (c = 0; c < 10; c++)
	 {
		 for (r = 0; r < 10; r++)
		 {
			 _putchar(r*c);
			 if (r == 9)
			 {
				 _putchar('\n');
			 }
		 }
	 }
}
