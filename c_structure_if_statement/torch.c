#include <stdio.h>
/**
 * print all even numbers between 1 -20` using the while loop
 */

int main()
{
	int num = 1;

	while (num <= 20)
	{
		if (num % 2 == 0)
		{
			printf("%i \n", num);  
		}
		num++;
	}
	return 0;
}
