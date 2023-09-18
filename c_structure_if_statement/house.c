#include <stdio.h>

/**
 * main - The grading session
 * description - To know the differnt scores of student
 * 80 - 100 = A
 * 70 - 79 = B
 * 65 - 69 = C
 * 60 - 64 = D
 * 50 - 59 - E
 * below 40 = F
 *
 * Return: 0
 */

int main(void)
{
	int score;

		printf("What is your score:");
	/* scanf tellsl the user to type in their inpu and you have to tell scanf what type of date you are taking in and scanf requires address or location of variable* you have created but it would be lerant in pinters */
	/*variable is the container you created to store something and that container is in the memory of the computer*/
/* the address is in usually in binary numbers*/
/*unlike printf where you pass the name of the variable, scanf you pass the address of the variable, since the address is in binary, the easiet way to tell the computer that you want to use the address of the variable is to use the && sign in front of the variable*/
		scanf("%d", &score);
	if (score >= 70 && score <= 79)
	{
		printf("B");
	}
	else if (score >= 65 && score <= 69)
	{
		printf ("C");
	}
	else if (score >= 60 && score <= 64)
	{
		printf("D");
	}
	else if (score >= 50 && score <= 59)
	{
		printf("E");
	}
	else if (score >= 0 && score <= 50)
	{
		printf("F");
	}
	else
	{
		printf("you entered an invalid score");
	}
	printf("\n");
	return 0; 


}
