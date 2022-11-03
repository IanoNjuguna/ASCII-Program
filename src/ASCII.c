#include <stdio.h>
/**
 * main - Entry point.
 * Description: Program that displays a
 *		character’s ASCII code value in decimal.
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */


int main(void)
{
	int c;

	printf("Input character: ");
	c = getchar();
	printf("The ASCII code value in decimal is: %d \n", c);
	return (0);
}

