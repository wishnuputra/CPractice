# 1. Dynamic Memory

How memory is assign to a program or application in a typical memory architecture. This memory allocation is devided into four segments.<br>
<img width="218" height="437" alt="image" src="https://github.com/user-attachments/assets/9bf6f74b-e7a1-4e7a-af85-26c0d804c6ee" />
Anything stored on the stack will be automatically cleared after the stack frame is completed.<br>
Meanwhile any variable stored on the Heap will not automatically cleared. It is the responsibility of the programmer to free the memory if it is not used anymore.

The three segments: `Text`, `Global`, and `Stack` do not grow during the lifetime of the program<br>

<img width="399" height="450" alt="image" src="https://github.com/user-attachments/assets/d77d8a9f-9a61-4f75-9096-365706bbad83" />

When stack reached maximum limit it is called *stackoverflow* and the program will crashed. It could happen during infinite loop or endless recursion.<br>

<img width="1569" height="633" alt="image" src="https://github.com/user-attachments/assets/75fe4d76-5069-4988-9fec-7bcc8b5275d4" />

In order to use heap, C uses `malloc`, `calloc`, `realloc`, `free`.<br>
`malloc` in C is a standard library function `stdlib.h` used to dynamically allocate a specific number of bytes on the heap during runtime. It returns a `void*` pointer to the allocated memory, which must be freed using `free()` to prevent memory leaks.<br>

If `malloc` can not find free memroy in the Heap, it will reutrn `null`. Therefore we need to handle this situation.

Allocating memory in the heap:<br>
```
void *malloc(size_t size);
void *calloc(size_t number, size_t size);
void *realloc(void *memblock, size_t size);
```

Deallocate memory:<br>
```
void free(void *memblock);
```
Example:<br>
```
void dynamicMemoryAllocation()
{
    int *ptr = (int *)malloc(sizeof(int)); // We use type casting, because malloc return void pointer
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

<img width="1085" height="477" alt="image" src="https://github.com/user-attachments/assets/73a062c6-91d1-42e2-a767-db074fe399da" />

Reference
1. [Pointer in C](https://www.youtube.com/watch?v=zuegQmMdy8M&list=WL&index=9&t=8099s)
