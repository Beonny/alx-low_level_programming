#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/**
 * main - Entry point
 * Description: Last digit of a numnber
 * Return: Always 0
 *
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	/* your code goes there */
if (ld > 5)
	printf("Last digit of %d is %d and is greater than 5", n, ld);
else if (ld == 0)
	printf("Last digit of %d is %d and is 0", n, ld);
else
	printf("Last digit of %d is %d and is less than 6 and not 0");
printf("/n");

return (0);
}
