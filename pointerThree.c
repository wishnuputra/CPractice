#include <stdio.h>
#include <stdlib.h>

void dynamicMemoryAllocation()
{
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Value: %d\n", *ptr);
    printf("Pointer: %p\n",ptr);

    *ptr = 42;
    printf("Value: %d\n", *ptr);
    printf("Pointer: %p\n",ptr);

    free(ptr);
    printf("Value: %d\n", *ptr);
    printf("Pointer: %p\n",ptr);

    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    *ptr = 100;
    printf("Value: %d\n", *ptr);
    printf("Pointer: %p\n",ptr);
    free(ptr);
}