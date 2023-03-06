#include "main.h"
/*
 * This function takes in a pointer s to the memory location that needs to be filled, a char value b that represents the constant byte to be written to memory, and an unsigned int value n that represents the number of bytes to fill.
*/

char *_memset(char *s, char b, unsigned int n) {
	for (unsigned int i = 0; i < n; i++) 
{
		 s[i] = b;
}
	return s;
}
