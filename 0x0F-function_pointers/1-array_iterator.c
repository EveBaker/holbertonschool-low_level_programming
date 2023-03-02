#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: an array
 * @size: size of an array
 * @action: pointer to a function
 * Return: Nothing.
 */
void array_iterator(intarray, size_t size, void (*action)(int))
{
    unsigned int i = 0;

    if (array != NULL && action != NULL && size > 0)
    {
        while (i < size)
        {
            action(array[i]);
            i++;
        }
    }
}
