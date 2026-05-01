#include <stdio.h>
#include <string.h>

void charArray();
void charArrayPointer();
void cString();
void print(char* str);

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
    // while (str[i] != '\0')
    while (i < 20)
    {
        // printf("%c", str[i]);
        printf("%d\n", *(str + i));
        // printf("%d", i);
        i++;
    }
    printf("\n");
}

