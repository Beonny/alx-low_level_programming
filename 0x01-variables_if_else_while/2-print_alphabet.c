#include <stdio.h>
/**
 * main- Entry point
 * Description: prints the alphabet in lowercase, followed by a new line.
 * Return: Always return 0
 */

int main(void)
{
int n = 97;

while (n <= 122)
{	putchar(n);
	n++;
}
putchar('\n');

return (0);

}

