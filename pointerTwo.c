#include <stdio.h>
#include <string.h>

void charArray();
void charArrayPointer();
void cString();
void print(char* str);
void stringLiteral();

void characterArrayAndPointer()
{
    cString();
}

void charArray()
{
    char C[5];
    C[0] = 'W';
    C[1] = 'I';
    C[2] = 'S';
    C[3] = 'H';
    C[4] = '\0'; // Null terminator to indicate the end of the string
    printf("%s\n", C); // This will print the character array

    int len = strlen(C);
    printf("Length of the string: %d\n", len);

    char name[20] = "Johnny";
    printf("Name: %s\n", name);
    printf("Length of the name: %ld\n", strlen(name));

    char title[20] = {'M', 'r', '.', ' ', 'J', 'o', 'h', 'n', 'n', 'y', '\0'}; // Character array initialized with individual characters
    printf("Title: %s\n", title);
    printf("Length of the title: %ld\n", strlen(title));
}

void charArrayPointer()
{
    char C[6] = "Hello";  
    printf("%s\n", C); // This will print the character array

    char* ptr = C; // Pointer to the first element of the character array
    ptr++;
    printf("%c\n", *ptr);
    printf("%c\n", ptr[2]);
}

void cString()
{
    char str[20] = "Hello, World!";
    print(str);
}

void print(char* str)
{
    int i = 0;
    str[1] = 'a'; // Modifying the string to demonstrate pointer access
    // while (str[i] != '\0')
    while (i < 20)
    {
        printf("%c", str[i]);
        // printf("%d\n", *(str + i));
        // printf("%d", i);
        i++;
    }
    printf("\n");
}

void stringLiteral()
{
    char* str = "Hello, World!";
    str[0] = 'X'; // This will cause undefined behavior since string literals are read-only
    printf("%s\n", str);
}

void twoDimensionaArray()
{
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("%d\n", arr[1][2]);

    int num = *(arr[1] + 2);
    printf("%d\n", num);

    printf("Address of arr: %p\n", arr);
    printf("Address of arr: %p\n", *arr);
    printf("Address of arr: %p\n", arr[0]);
    printf("Address of arr: %p\n", &arr[0][0]); 

    int (*ptr)[3] = arr; // Pointer to an array of 3 integers
}

void pointerAndThreeDimensionalArray()
{
    int arr[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    printf("%d\n", arr[1][2][3]);

    int num = *(*(*(arr + 1) + 2) + 3);
    printf("%d\n", num);

    printf("Address of arr: %p\n", arr);
    printf("Address of arr: %p\n", *arr);
    printf("Address of arr: %p\n", arr[0]);
    printf("Address of arr: %p\n", &arr[0][0][0]); 

    int (*ptr)[3][4] = arr; // Pointer to an array of 3 arrays of 4 integers
}

void pointerAndMultiDimensionalArray()
{
    int C[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    printf("%p %p %p %p\n", C, *C, C[0], &C[0][0]);
    printf("%d\n", *(C[0][0]+1));
}

void Func(int (*A)[4])
{
    printf("%p\n", A);
    printf("%d\n", *(*(A+1)+1));
}

void FuncThreeDimensionalArray(int arr[][3][4])
{
    printf("%p\n", arr);
}

void FuncThreeDimensionalArray2(int (*arr)[3][4])
{
    printf("%p\n", arr);
}

void passingArrayAsArgument()
{
    // A returns a pointer to the first element of the array, which is of type int*
    int A[3] = {1, 2, 3};

    // B returns a pointer to the first element of the array, which is of type int (*)[4]
    int B[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    }; 

    // C returns a pointer to the first element of the array, which is of type int (*)[3][4]
    int C[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    printf("%p\n", B);
    Func(B);
    FuncThreeDimensionalArray(C);
}