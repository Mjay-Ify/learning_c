#include <stdio.h>
int main()
{
	int nationality;
	nationality = 10;

	/*
	 * Ghana = 10
	 * Nigeria = 20
	 * Mali = 30
	 * Togo = 40
	 */

	if (nationality == 10)
	{
		printf("You are a Ghanian");
	}
	else if (nationality == 20)
	{
		printf("You are a Nigerian");
	}
	else if (nationality == 30)
	{
		printf("You are a Malian");
	}
	else if (nationality == 40)
	{
		printf("You are Togplese");
	}
	else
		printf("I don't know you");

	printf("\n");
}
