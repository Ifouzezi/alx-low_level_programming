#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located,
 *         or -1 if the value is not present or if the array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
    int currentIndex, jumpStep, prevIndex;

    if (array == NULL || size == 0)
        return -1;

    jumpStep = (int)sqrt((double)size);
    currentIndex = 0;
    prevIndex = currentIndex;

    do {
        printf("Value checked array[%d] = [%d]\n", currentIndex, array[currentIndex]);

        if (array[currentIndex] == value)
            return currentIndex;

        prevIndex = currentIndex;
        currentIndex += jumpStep;
    } while (currentIndex < (int)size && array[currentIndex] < value);

    printf("Value found between indexes [%d] and [%d]\n", prevIndex, currentIndex);

    for (; prevIndex <= currentIndex && prevIndex < (int)size; prevIndex++) {
        printf("Value checked array[%d] = [%d]\n", prevIndex, array[prevIndex]);

        if (array[prevIndex] == value)
            return prevIndex;
    }

    return -1;
}
