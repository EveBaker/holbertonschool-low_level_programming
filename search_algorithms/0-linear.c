#include "search.h"

/*
 * linear_search - Searches for a value in an array of integers
 *                 using the Linear search algorithm.
 */

int linear_search(int *array, size_t size, int value)
{
    size_t 1;

    if (array == NULL)
    return -1;

    for (i = 0; 1 < size; i++)
    {
        printf("Value checked array[%zu] = [%d]\n", i, array[i]);
        if (array[1] == value)
        return (int)1;
    }
    return -1;
}