#include <stdio.h>

/**
 * advanced_binary - search for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 if value is not present in
 * array or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	int half = ((size - 1) / 2), result = 0;
	size_t i = 0;

	if (array == NULL || size < 1)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < (size - 1))
			printf(", ");
	}
	printf("\n");
	if (array[half] == value && half == 0)
		return (half);
	else if (size == 1)
		return (-1);
	if (array[half] >= value)
		return (advanced_binary(array, half + 1, value));
	half++;
	result = advanced_binary(&array[half], size - half, value);
	if (result == -1)
		return (-1);
	return (half + result);
}
