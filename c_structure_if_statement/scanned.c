#include <stdio.h>
/**
 * main - main function
 * Description - There is somwthing called range and it is usually written 80..100. We were asked to ask the user to input their score.the rangea re below
 *
 * Return: 0
 */
/* 80..100
 * 70..79
 * 65..69
 * 60..64
 * 50..59
 * 0..49
 */


int main()
{
	int score;
	/*tell uer to type their score*/
	printf("What was your score:");
	/*Accepts the user's input*/
	scanf("%d", &score);

	switch(score)
	{
		case 80 ... 100:
		printf("A");
		break;
		case 70 ... 79:
		printf("B");
		break;
		case 65 ... 69:
		printf("C");
		break;
		case 60 ... 64:
		printf("D");
		break;
		case 50 ... 59:
		printf("E");
		break;
		case 0 ... 49:
		printf("F");
		break;
		default:
		printf("Invalid score");

	}
	printf("\n");


	int point;
	
	printf("What is the point you had?");
	scanf("%d", &point);

	switch(point)
	{
		case 90:
			printf("A");
			break;
		case 69:
			printf("B");
			break;
		default:
			printf("Unknown Point");
	}
	printf("\n");
	return (0);

}	
