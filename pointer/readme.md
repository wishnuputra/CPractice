# 1. Dynamic Memory

<img width="483" height="376" alt="image" src="https://github.com/user-attachments/assets/9b09ba05-1e93-4117-bba5-a435cb33836c" />

The three segments: `Text`, `Global`, and `Stack` do not grow during the lifetime of the program<br>

<img width="399" height="450" alt="image" src="https://github.com/user-attachments/assets/d77d8a9f-9a61-4f75-9096-365706bbad83" />

When stack reached maximum limit it is called *stackoverflow* and the program will crashed. It could happen during infinite loop or endless recursion.<br>

<img width="1569" height="633" alt="image" src="https://github.com/user-attachments/assets/75fe4d76-5069-4988-9fec-7bcc8b5275d4" />

In order to use heap, C uses `malloc`, `calloc`, `realloc`, `free`.
```
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
```
The result of executing the above code
```
Value: 42
Pointer: 0x56a560d196b0
Value: 1784024345
Pointer: 0x56a560d196b0
Value: 100
Pointer: 0x56a560d196b0
```
Reference
1. [Pointer in C](https://www.youtube.com/watch?v=zuegQmMdy8M&list=WL&index=9&t=8099s)
