#include <stdio.h>
#include <stdlib.h>

void dynamicMemoryAllocation()
{
	int *ptr = (int *)malloc(sizeof(int)); // We use type casting, because malloc return void pointer
	if (ptr == NULL)
	{
		printf("Memory allocation failed\n");
		return;
	}

	printf("Value: %d\n", *ptr);
	printf("Pointer: %p\n", ptr);

	*ptr = 42;
	printf("Value: %d\n", *ptr);
	printf("Pointer: %p\n", ptr);

	free(ptr); // We need to free the allocated memory to avoid memory leaks
	printf("Value: %d\n", *ptr);
	printf("Pointer: %p\n", ptr);

	ptr = (int *)malloc(sizeof(int));
	if (ptr == NULL)
	{
		printf("Memory allocation failed\n");
		return;
	}
	*ptr = 100;
	printf("Value: %d\n", *ptr);
	printf("Pointer: %p\n", ptr);
	free(ptr);
}

void arrayMemoryAllocation()
{
	int *arr = (int *)malloc(5 * sizeof(int)); // Allocate memory for an array of 5 integers
	if (arr == NULL)
	{
		printf("Memory allocation failed\n");
		return;
	}

	for (int i = 0; i < 5; i++)
	{
		arr[i] = i + 1; // Initialize the array with values 1 to 5
	}

	printf("Array values: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr); // Free the allocated memory for the array
}

void practiceMalloc()
{
	void *ptr = malloc(sizeof(int));
	// int *ptr = (int*)malloc(sizeof(int));
	if (ptr == NULL)
	{
		printf("Memory allocation failed\n");
		return;
	}

	*((int *)ptr) = 10;
	printf("Value: %d\n", *((int *)ptr));
	printf("Pointer: %p\n", ptr);

	free(ptr);
}