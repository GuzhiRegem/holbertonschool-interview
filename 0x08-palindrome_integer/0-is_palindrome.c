#include "palindrome.h"

/**
 * is_palindrome - checks if palindrome 
 * @n: number
 * Return: int 
 */
int is_palindrome(unsigned long n)
{
	unsigned long rev = 0, c = n;
	int i, len, out = 1;

	for (len = 0; c; c /= 10, len++)
		rev = (rev * 10) + (c % 10);
	for (i = 0; i < (len / 2); i++, n /= 10, rev /= 10)
		if (n % 10 != rev % 10)
			out = 0;
	return (out);
}