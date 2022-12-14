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
	int left = 0, mid, i;
	int right = size - 1;
	
	if (array == NULL)
	{
		return -1;
	}
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		if (array[mid] >= value)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	if (left < (int)size && array[left] == value)
	{
		return left;
	}
	else
	{
		return -1;
	}
}
