#include <stdio.h>
#include <stdbool.h>

//macros
#define NEW_LINE printf("\n")

int main()
{
    printf("Hello World!!\n\n\n");

    char name[32];

    printf("Enter a name: ");

    scanf("%s", name);

    printf("\nHello\t%s\n\n\n", name);

NEW_LINE, NEW_LINE, NEW_LINE, NEW_LINE, NEW_LINE, NEW_LINE, NEW_LINE, NEW_LINE;

    return 0;
}