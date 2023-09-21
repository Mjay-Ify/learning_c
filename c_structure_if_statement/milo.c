#include <stdio.h>

int main()
{
	int x = 1;
	/**
	 * it could also be written as 
	 * int x;
	 * x = 1;
	 * in for loop it is wriiten (intialize ; condition ; increment or decrement)
	 * but it is different in while loop all three are done separately
	 * first initalize and then in the while statement give the condition then increment or decrement
	 */
	while (x <= 10)
	{
		printf("%d \n", x);
		x++;
		
	}
	return 0;
}
