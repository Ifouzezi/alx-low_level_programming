#include <stdio.h>
#include <math.h>

int jump_search(int *array, size_t size, int value) {
    if (array == NULL)
        return -1;
    
    int step = sqrt(size);
    int prev = 0;
    
    printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
    
    while (array[step] <= value && step < size) {
        prev = step;
        step += sqrt(size);
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        
        if (prev >= size)
            return -1;
    }
    
    printf("Value found between indexes [%d] and [%d]\n", prev, step);
    
    while (array[prev] < value) {
        prev++;
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        
        if (prev == fmin(step, size))
            return -1;
    }
    
    if (array[prev] == value)
        return prev;
    
    return -1;
}
