#include <stdio.h>
/**
 * main- Entry point
 * Description: print all the numbers of base sixteen
 * Return: 0 (success)
 */
int main(void)
{
int n;
int i;
for (i = 48; i <= 57; i++)
{
	putchar(i);
}
for (n = 97; n <= 102; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}

