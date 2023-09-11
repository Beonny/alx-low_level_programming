#include <stdio.h>
/**
 * main- Entry point
 * Description: prints all combinations of single digit numbers
 * Return: 0 (success)
 */
int main(void)
{
int a;
for (a = 48; a <= 57; a++)
{
	putchar(a);
	putchar(',');
	putchar(' ');

}
putchar('\n');
return (0);
}
