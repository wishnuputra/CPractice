#include <stdio.h>

void testHello()
{
    printf("Hello, World Two\n");
}

void learnPointer()
{
    int a;
    int *p;
    a = 10;
    p = &a;
    printf("Printing p: %p\n", p);
    printf("Printing *p: %d\n", *p);

    int b = 20;
    *p = b;
    printf("Printing p: %p\n", p);
    printf("Printing *p: %d\n", *p);

    // Pointer arithmetic
    printf("Printing p: %p\n", p);
    printf("Printing p+1: %p\n", p+1); // This will move the pointer to the next integer location (4 bytes ahead)
    printf("Printing p-1: %p\n", p-1); // This will move the pointer to the previous integer location (4 bytes back)


}