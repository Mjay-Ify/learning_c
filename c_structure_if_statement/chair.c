#include <stdio.h>
/**
 * print all even number between 1 -20
 */

int main()
{
	int num;

	for (num = 1 ; num <= 20 ; num++)
	
	{
		if (num % 2 == 0)
		{
			printf("%i \n", num);
		}
	}
	return 0;
	/** i f we are to use while loop it would be written as
	 * int num = 1
	 * while (num <= 20)
	 * {
	 * 	 while (num % 2 == 0)                                                          {                                                                                    printf("%i \n", num);                                                        num++                                                                }     
	 * 	printf("%d \n", num);
	 * 	num++
	 * }
	 * note that the loop in the while statement is wrong because we werenot asked to print something continously but check and print 
	 */
}
