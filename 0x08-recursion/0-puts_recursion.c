#include "main.h"

/* prints a string
 * main - Entry point
 * return 0;
*/

void _puts_recursion(char *s);
{
	if(*s == '\0')
		{
			putchar('\n');
			return;
		}
	putchar(*s);
	_puts_recursion(s + 1);
}
