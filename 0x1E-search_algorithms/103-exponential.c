#include <stdio.h>

/**
 * binary_search - search for a value in a sorted array of integers using binary search
 * @array: pointer to the first element of the array to search in
 * @start: the start index of the array
 * @end: the end index of the array
 * @value: the value to search for
 *
 * Return: the first index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t start, size_t end, int value)
{
    size_t mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        printf("Searching in array: ");
        for (size_t i = start; i <= end; i++)
        {
            printf("%d", array[i]);
            if (i < end)
                printf(", ");
        }
        printf("\n");
        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return (-1);
}

/**
 * exponential_search - search for a value in a sorted array of integers using exponential search
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    if (!array)
        return (-1);

    size_t bound = 1;
    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    size_t start = bound / 2;
    size_t end = (bound < size) ? bound : size - 1;
    printf("Value found between indexes [%lu] and [%lu]\n", start, end);
    return (binary_search(array, start, end, value));
}
