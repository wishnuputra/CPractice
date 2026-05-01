#include <stdio.h>

void testHello()
{
    printf("Hello, World Two\n");
}

void pointerAndPointerArithmetic()
{
    int a;
    int *p;
    a = 10;
    p = &a;
    printf("Printing p: %p\n", p);
    printf("Printing *p: %d\n", *p);

    int b = 110;
    *p = b;
    printf("Printing p: %p\n", p);
    printf("Printing *p: %d\n", *p);

    // Pointer arithmetic
    printf("Printing p: %p\n", p);
    printf("Printing *p: %d\n", *p);
    printf("Size of integer is %ld bytes\n", sizeof(int));
    printf("Printing p+1: %p\n", p+1); // This will move the pointer to the next integer location (4 bytes ahead)
    printf("Printing *(p+1): %d\n", *(p+1)); // This will attempt to access the next integer location, which may lead to undefined behavior
    printf("Printing p-1: %p\n", p-1); // This will move the pointer to the previous integer location (4 bytes back)
    printf("Printing *(p-2): %d\n", *(p-2)); // This will attempt to access the previous integer location, which may lead to undefined behavior 
}

void pointerTypeAndVoidPointer()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("size of integer is %ld\n", sizeof(int));
    printf("size of integer pointer is %ld\n", sizeof(int*));
    printf("Address = %p, value = %d\n", p, *p);
    printf("Address = %p, value = %d\n", p+1, *(p+1));

    char *p0;
    p0 = (char*)p; // Typecasting the integer pointer to a character pointer
    printf("size of char is %ld\n", sizeof(char));
    printf("size of char pointer is %ld\n", sizeof(char*));
    printf("Address = %p, value = %d\n", p0, *p0); // This will print the first byte of the integer value (1025), which is 1 in this case (1025 in binary is 00000000 00000000 00000100 00000001)
    printf("Address = %p, value = %d\n", p0+1, *(p0+1)); // This will print the second byte of the integer value (1025), which is 0 in this case

    // Void pointer - Generic pointer that can point to any data type
    void *vp;
    vp = p; // Void pointer can point to any data type
    printf("Address = %p, value = %d\n", vp, *(int*)vp); // Typecasting the void pointer back to an integer pointer to dereference it
    printf("size of void is %ld\n", sizeof(void));
    printf("size of void pointer is %ld\n", sizeof(void*));
}

void pointerToPointer()
{
    int a = 10;
    int *p;
    p = &a;
    printf("Value of a: %d\n", a);
    printf("Value of *p: %d\n", *p);

    int **pp; // Pointer to pointer
    pp = &p; // pp is now pointing to p
    printf("Value of **pp: %d\n", **pp); // Dereferencing pp to get the value of a through p

    int ***ppp; // Pointer to pointer to pointer
    ppp = &pp; // ppp is now pointing to pp
    printf("Value of ***ppp: %d\n", ***ppp); // Dereferencing ppp to get the value of a through pp and p

    ***ppp = *p + 5;
    printf("Value of a after modification through ppp: %d\n", a); // This will print 15, as we have modified the value of a through the pointer to pointer to pointer
}

void increment(int num)
{
    num++; // Incrementing the value pointed to by num
    printf("Value of num inside function call: %d\n", num);
    printf("Address of num inside function call: %p\n", &num);
}

void incrementPointer(int *num)
{
    *num = *num + 1; // Incrementing the value pointed to by num
    printf("Value of num inside function call: %d\n", *num);
    printf("Address of num inside function call: %p\n", num);
}

void pointerAsFunctionArgument()
{
    int a = 10;
    printf("Value of a before function call: %d\n", a);
    printf("Address of a: %p\n", &a);

    increment(a); // Passing the address of a to the function
    printf("Value of a after increment function call: %d\n", a); // This will print 10, as the function increments a copy of the value of a, not the original variable

    incrementPointer(&a); // Passing the address of a to the function
    printf("Value of a after incrementPointer function call: %d\n", a); // This will print 11, as the function increments the value of a through the pointer
}

void pointerAndArray()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Address of arr: %p\n", arr); // This will print the address of the first element of the array
    printf("Address of arr+1: %p\n", arr + 1); // This will print the address of the second element of the array
    printf("Address of &arr[1]: %p\n", &arr[1]); // This will also print the address of the second element of the array

    int *p = arr; // The name of the array is a pointer to the first element of the array
    printf("Address stored in pointer p: %p\n", p); // This will print the same address as arr
    printf("First element of the array: %d\n", *p); // This will print 1
    printf("Second element of the array: %d\n", *(p + 1)); // This will print 2
    printf("Third element of the array: %d\n", *(p + 2)); // This will print 3
    printf("Fourth element of the array: %d\n", *(p + 3)); // This will print 4
    printf("Fifth element of the array: %d\n", *(p + 4)); // This will print 5

    // We can also use array indexing with pointers
    printf("First element of the array using indexing: %d\n", p[0]); // This will print 1
    printf("Second element of the array using indexing: %d\n", p[1]); // This will print 2
    printf("Third element of the array using indexing: %d\n", p[2]); // This will print 3
    printf("Fourth element of the array using indexing: %d\n", p[3]); // This will print 4
    printf("Fifth element of the array using indexing: %d\n", p[4]); // This will print 5

    int *p1 = &arr[0]; // Pointer to the first element of the array
    printf("First element of the array using p1: %d\n", *p1); // This will print 1
    printf("Second element of the array using p1+1: %d\n", *(p1 + 1)); // This will print 2

    for (int i = 0; i < 5; i++)
    {
        printf("Address of element %d of the array: %p\n", i, arr + i); // This will print the address of each element of the array
        printf("Address of element %d of the array: %p\n", i, &arr[i]); // This will also print the address of each element of the array
        printf("Element %d of the array using pointer arithmetic: %d\n", i, *(arr + i)); // This will print the value of each element of the array
        printf("Element %d of the array using indexing: %d\n", i, arr[i]); // This will also print the value of each element of the array
    }
}

void arrayOfPointers()
{
    int a = 10, b = 20, c = 30;
    int *arr[3]; // Array of pointers
    arr[0] = &a; // arr[0] is a pointer to a
    arr[1] = &b; // arr[1] is a pointer to b
    arr[2] = &c; // arr[2] is a pointer to c

    for (int i = 0; i < 3; i++)
    {
        printf("Value of element %d: %d\n", i, *arr[i]); // This will print the value of each variable through the pointers in the array
        printf("Address of element %d: %p\n", i, arr[i]); // This will print the address of each variable through the pointers in the array
    }
}

/**** arrays as function arguments ****/
void printArray(int arr[], int size);
int sumOfArray(int arr[], size_t size);
int totalArray(int arr[]);
void modifyArray(int* arr, size_t size);

void arrayAsFunctionArgument()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // printArray(arr, 5);
    size_t array_size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of the array is: %ld\n", array_size);
    
    int sum = sumOfArray(arr, array_size);
    printf("Sum of the array is: %d\n", sum);

    int total = totalArray(arr);
    printf("Total of the array is: %d\n", total);

    modifyArray(arr, array_size);
    printf("Array after modification:\n");
    printArray(arr, array_size);
}

void printArray(int arr[], int size) // Function that takes an array as an argument
{
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: %d\n", i, arr[i]); // This will print the value of each element of the array
    }
}

int sumOfArray(int arr[], size_t size) // Function that takes an array as an argument and returns the sum of its elements
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int totalArray(int arr[])
{
    int total = 0;
    // size_t size = sizeof(arr) / sizeof(arr[0]);
    // for (size_t i = 0; i < size; i++)
    // {
    //     total += arr[i];
    // }
    return total;
}

void modifyArray(int* arr, size_t size) // Function that takes an array as an argument and modifies its elements
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] += 10; // This will add 10 to each element of the array
    }
}
/**** end of arrays as function arguments ****/


