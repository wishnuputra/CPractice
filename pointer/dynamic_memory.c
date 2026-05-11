#include <stdlib.h>

void practiceArrayMemoryAllocation()
{
	int n;
	printf("Enter size of array:\n");
	scanf("%d", &n);

	int A[n]; // might cause problem, because the array size is assigned at runtime
	A[0] = 2;
	A[1] = 5;
	printf("%d\n", *A);
	printf("%d\n", *(A+1));

	printf("%d\n", A[0]);
	printf("%d\n", A[1]);

}

void arrayMalloc()
{
        int n;
        printf("Enter size of array:\n");
        scanf("%d", &n);

        //int *A = (int*)malloc(n*sizeof(int));
        int *A = (int*)calloc(n, sizeof(int)); // calloc will initialize the array with zeros

	for(int i = 0; i < n; i++)
	{
		A[i] = 1 + i;
	}

	        for(int i = 0; i < n; i++)
        {
                printf("%d ", A[i]);
        }

	free(A);
	A = NULL;
	printf("\n");

	A[1] = 77;
	*(A+2) = 999;
	for(int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}

}

void practiceRealloc()
{
	int n;
        printf("Enter size of array:\n");
        scanf("%d", &n);

        int *A = (int*)calloc(n, sizeof(int));

        for(int i = 0; i < n; i++)
        {
                A[i] = 1 + i;
        }

	//int *B = (int*)realloc(A, 2*sizeof(int));
	//int *B = (int*)realloc(A, 0); // This is equivalent as calling free(B)
	int *B = (int*)realloc(NULL, 2*sizeof(int)); // equivalent as calling malloc
	//free(A);
	printf("Previous block address = %p, new block address = %p\n", A, B);	

	for(int i = 0; i < 2*n; i++)
        {
                printf("%d\n", B[i]);
        }

}

int add(int a, int b) // Called function
{
	printf("Add - Address of a: %p, b: %p\n", &a, &b);
	return a + b;
}

void passByValue() // Calling function
{
	int a = 2;
	int b = 4;
	printf("Main - Address of a: %p, b: %p\n", &a, &b);
	int sum = add(a, b); // Call by value
	printf("Sum is: %d", sum);
}

int addRef(int* a, int* b) // Called function
{
	// a and b are pointers to integer
        printf("Adds - Address of pointer a: %p, b: %p\n", &a, &b);
	printf("Adds - value stored in pointer a: %p, b: %p\n", a, b);
	printf("Adds - value stored in address pointed by pointer a: %d, b: %d\n", *a, *b);

        return *a + *b;
}

void passByReference()
{ 
        int a = 2;
        int b = 4;

        printf("Main - Address of a: %p, b: %p\n", &a, &b);
        int sum = addRef(&a, &b); // Call by reference
        printf("Sum is: %d\n", sum);

}



