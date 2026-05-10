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
        int *A = (int*)calloc(n, sizeof(int));

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

