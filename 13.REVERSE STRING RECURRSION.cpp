#include <stdio.h>
void printReverse(char *str) 
{
    if (*str == '\0') 
	{
        return; 
    }

    printReverse(str + 1);
    printf("%c", *str);
}

int main() 
{
    char str[] = "Hello, World!";

    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    printReverse(str);
    printf("\n");

    return 0;
}

