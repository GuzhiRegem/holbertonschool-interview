#include "slide_line.h"

/**
 * slide_line - 2048 based function
 * @line: line
 * @size: size
 * @direction: direction
 * Return: int
 */
int slide_line(int *line, size_t size, int direction)
{
	int i, j, ch = 1, siz = (int)size;

	if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
		return (0);
	if (direction == SLIDE_RIGHT)
		ch = -1;
	for (i = (ch == -1) * (siz - 1); i < siz && i >= 0; i += ch)
	{
		for (j = i; j < siz && j >= 0; j += ch)
		{
			if (i == j)
				continue;
			if (line[i] == 0)
			{
				line[i] = line[j];
				line[j] = 0;
			}
			else if (line[i] == line[j])
			{
				line[j] = 0;
				line[i] *= 2;
				break;
			}
		}
	}
	return (1);
}
